#include "buf.h"

void buf_push_char(buf_t *b, char c)
{
	EXIT_NULL(b);

	/* increase buf_size if necessary */
	if(b->buf_content_size+1 == b->buf_size) {
		b->buf_content = realloc(b->buf_content, b->buf_size*2*sizeof(char));
		EXIT_NULL(b->buf_content);
		b->buf_size *= 2;
	}

	b->buf_content[b->buf_content_size] = c;
	b->buf_content_size++;
}

void buf_push_str(buf_t *b, char *s)
{
	int i;

	EXIT_NULL(s);
	EXIT_NULL(b);

	for(i = 0; i < strlen(s); i++) {
		buf_push_char(b, s[i]);
	}
}

void buf_read(buf_t *b, FILE *f)
{
	char c;

	EXIT_NULL(f);
	EXIT_NULL(b);

	for(;;) {
		c = getc(f);
		EXIT_FERROR(f);

		if(c == EOF)
			break;

		buf_push_char(b, c);
	}
}

buf_t* buf_new(void)
{
	buf_t *b = malloc(sizeof(buf_t));
	EXIT_NULL(b);

	b->buf_content = malloc(32*sizeof(char));
	EXIT_NULL(b->buf_content);
	b->buf_size = 32;
	b->buf_content_size = 0;

	return b;
}

void buf_free(buf_t *b)
{
	free(b->buf_content);
	free(b);
}
