#include "header.h"

typedef struct header_s header_t;
typedef struct variable_entry_s variable_entry_t;
typedef struct program_s program_t;

/* header for computer file */
struct header_s {
	uint8_t sig1[8];
	uint8_t sig2[3];
	uint8_t comment[42];
	uint16_t length;
	/* variable entry inserted here */
	uint16_t checksum;
};

/* entry for program in computer file */
struct variable_entry_s {
	uint16_t sig;
	uint16_t length;
	uint8_t type;
	uint8_t name[8];
	uint8_t version;
	uint8_t archived;
	uint16_t length_dupe;
	/* on-calc program inserted here */
};

buf_t* header_pack_buf(buf_t *bin, char *name, bool archived)
{
	buf_t *bout;
	int i;

	header_t header = {
		.sig1 = "**TI83F*",
		.sig2 = { 0x1A, 0x0A, 0x00 },
		.comment = "generated by tok8x",
	};

	variable_entry_t variable_entry = {
		.sig = 0x0D,
		.type = 0x05, /* signifies a program */
		.version = 0x00,
	};

	EXIT_NULL(bin);

	bout = buf_new();

	EXIT_NULL(bout);

	/* calc header.length */
	header.length = 17+(bin->buf_content_size);

	/* set variable_entry.(length|length_dupe) */
	variable_entry.length = bin->buf_content_size;

	/* set variable_entry.name */
	memcpy(variable_entry.name, (unsigned char*)name, 8);

	/* set variable_entry.archived */
	if(archived)
		variable_entry.archived = 0x80;
	else
		variable_entry.archived = 0x00;

	/* push first part of header */
	buf_push_nbyte(bout, header.sig1, 8);
	buf_push_nbyte(bout, header.sig2, 3);
	buf_push_nbyte(bout, header.comment, 42);
	buf_push_byte(bout, header.length >> 8);
	buf_push_byte(bout, header.length & 0xFF);

	/* push variable_entry */
	buf_push_byte(bout, variable_entry.sig >> 8);
	buf_push_byte(bout, variable_entry.sig & 0xFF);
	buf_push_byte(bout, variable_entry.length >> 8);
	buf_push_byte(bout, variable_entry.length & 0xFF);
	buf_push_byte(bout, variable_entry.type);
	buf_push_nbyte(bout, variable_entry.name, 8);
	buf_push_byte(bout, variable_entry.version);
	buf_push_byte(bout, variable_entry.archived);
	buf_push_byte(bout, variable_entry.length_dupe >> 8);
	buf_push_byte(bout, variable_entry.length_dupe & 0xFF);

	/* push bin */
	buf_push_byte(bout, bin->buf_content_size >> 8);
	buf_push_byte(bout, bin->buf_content_size & 0xFF);
	buf_push_nbyte(bout, bin->buf_content,
			bin->buf_content_size);

	/* calc header.checksum */
	header.checksum = 0x0000;
	for(i = 0; i < bin->buf_content_size; i++)
		header.checksum += bin->buf_content[i];

	/* push header.checksum */
	buf_push_byte(bout, header.checksum >> 8);
	buf_push_byte(bout, header.checksum & 0xFF);

	return bout;
}