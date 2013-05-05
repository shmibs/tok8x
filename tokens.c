#include "tokens.h"

/* i should probably be using trees here
 * to speed up search times, but meh */

token t_basic[] = {
	{ 0x01, NONE, ">DMS" },
	{ 0x02, NONE, ">Dec" },
	{ 0x03, NONE, ">Frac" },
	{ 0x04, NONE, "->" },
	{ 0x05, NONE, "Boxplot" },
	{ 0x06, NONE, "[" },
	{ 0x07, NONE, "]" },
	{ 0x08, NONE, "{" },
	{ 0x09, NONE, "}" },
	{ 0x0A, NONE, "^^r" },
	{ 0x0B, NONE, "^^o" },
	{ 0x0C, NONE, "^^-1" },
	{ 0x0D, NONE, "^^2" },
	{ 0x0E, NONE, "^^T" },
	{ 0x0F, NONE, "^^3" },
	{ 0x10, NONE, "(" },
	{ 0x11, NONE, ")" },
	{ 0x12, NONE, "round(" },
	{ 0x13, NONE, "pxl-Test(" },
	{ 0x14, NONE, "augment" },
	{ 0x15, NONE, "rowSwap(" },
	{ 0x16, NONE, "row+(" },
	{ 0x17, NONE, "*row(" },
	{ 0x18, NONE, "*row+(" },
	{ 0x19, NONE, "max(" },
	{ 0x1A, NONE, "min(" },
	{ 0x1B, NONE, "R>Pr(" },
	{ 0x1C, NONE, "R>Ptheta(" },
	{ 0x1D, NONE, "P>Rx(" },
	{ 0x1E, NONE, "P>Ry(" },
	{ 0x1F, NONE, "median(" },
	{ 0x20, NONE, "randM(" },
	{ 0x21, NONE, "mean(" },
	{ 0x22, NONE, "solve(" },
	{ 0x23, NONE, "seq(" },
	{ 0x24, NONE, "fnInt(" },
	{ 0x25, NONE, "nDeriv(" },
	{ 0x27, NONE, "fMin(" },
	{ 0x28, NONE, "fMax(" },
	{ 0x29, NONE, " " },
	{ 0x29, NONE, "\t" },
	{ 0x2A, NONE, "\"" },
	{ 0x2B, NONE, "," },
	{ 0x2C, NONE, "[i]" },
	{ 0x2D, NONE, "!" },
	{ 0x2E, NONE, "CubicReg" },
	{ 0x2F, NONE, "QuartReg" },
	{ 0x30, NONE, "0" },
	{ 0x31, NONE, "1" },
	{ 0x32, NONE, "2" },
	{ 0x33, NONE, "3" },
	{ 0x34, NONE, "4" },
	{ 0x35, NONE, "5" },
	{ 0x36, NONE, "6" },
	{ 0x37, NONE, "7" },
	{ 0x38, NONE, "8" },
	{ 0x39, NONE, "9" },
	{ 0x3A, NONE, "." },
	{ 0x3A, NONE, "\\." }, /* this one is here to allow ... to not be translated to an ellipsis char */
	{ 0x3B, NONE, "|E" },
	{ 0x3C, NONE, " or " },
	{ 0x3D, NONE, " xor " },
	{ 0x3E, NONE, ":" },
	{ 0x3F, NONE, "\n" },
	{ 0x40, NONE, " and " },
	{ 0x41, NONE, "A" },
	{ 0x42, NONE, "B" },
	{ 0x43, NONE, "C" },
	{ 0x44, NONE, "D" },
	{ 0x45, NONE, "E" },
	{ 0x46, NONE, "F" },
	{ 0x47, NONE, "G" },
	{ 0x48, NONE, "H" },
	{ 0x49, NONE, "I" },
	{ 0x4A, NONE, "J" },
	{ 0x4B, NONE, "K" },
	{ 0x4C, NONE, "L" },
	{ 0x4D, NONE, "M" },
	{ 0x4E, NONE, "N" },
	{ 0x4F, NONE, "O" },
	{ 0x50, NONE, "P" },
	{ 0x51, NONE, "Q" },
	{ 0x52, NONE, "R" },
	{ 0x53, NONE, "S" },
	{ 0x54, NONE, "T" },
	{ 0x55, NONE, "U" },
	{ 0x56, NONE, "V" },
	{ 0x57, NONE, "W" },
	{ 0x58, NONE, "X" },
	{ 0x59, NONE, "Y" },
	{ 0x5A, NONE, "Z" },
	{ 0x5B, NONE, "theta" },
	
	{ 0x5C, 0x00, "[A]" },
	{ 0x5C, 0x01, "[B]" },
	{ 0x5C, 0x02, "[C]" },
	{ 0x5C, 0x03, "[D]" },
	{ 0x5C, 0x04, "[E]" },
	{ 0x5C, 0x05, "[F]" },
	{ 0x5C, 0x06, "[G]" },
	{ 0x5C, 0x07, "[H]" },
	{ 0x5C, 0x08, "[I]" },
	{ 0x5C, 0x09, "[J]" },

	{ 0x5D, 0x00, "L1" },
	{ 0x5D, 0x01, "L2" },
	{ 0x5D, 0x02, "L3" },
	{ 0x5D, 0x03, "L4" },
	{ 0x5D, 0x04, "L5" },
	{ 0x5D, 0x05, "L6" },
	
	{ 0x5E, 0x10, "{Y1}" },
	{ 0x5E, 0x11, "{Y2}" },
	{ 0x5E, 0x12, "{Y3}" },
	{ 0x5E, 0x13, "{Y4}" },
	{ 0x5E, 0x14, "{Y5}" },
	{ 0x5E, 0x15, "{Y6}" },
	{ 0x5E, 0x16, "{Y7}" },
	{ 0x5E, 0x17, "{Y8}" },
	{ 0x5E, 0x18, "{Y9}" },
	{ 0x5E, 0x19, "{Y0}" },
	{ 0x5E, 0x20, "{X1T}" },
	{ 0x5E, 0x21, "{Y1T}" },
	{ 0x5E, 0x22, "{X2T}" },
	{ 0x5E, 0x23, "{Y2T}" },
	{ 0x5E, 0x24, "{X3T}" },
	{ 0x5E, 0x25, "{Y3T}" },
	{ 0x5E, 0x26, "{X4T}" },
	{ 0x5E, 0x27, "{Y4T}" },
	{ 0x5E, 0x28, "{X5T}" },
	{ 0x5E, 0x29, "{Y5T}" },
	{ 0x5E, 0x2A, "{X6T}" },
	{ 0x5E, 0x2B, "{Y6T}" },
	{ 0x5E, 0x40, "{r1}" },
	{ 0x5E, 0x41, "{r2}" },
	{ 0x5E, 0x42, "{r3}" },
	{ 0x5E, 0x43, "{r4}" },
	{ 0x5E, 0x44, "{r5}" },
	{ 0x5E, 0x45, "{r6}" },
	{ 0x5E, 0x80, "|u" },
	{ 0x5E, 0x81, "|v" },
	{ 0x5E, 0x82, "|w" },
	
	{ 0x5F, NONE, "prgm" },

	{ 0x60, 0x00, "Pic1" },
	{ 0x60, 0x01, "Pic2" },
	{ 0x60, 0x02, "Pic3" },
	{ 0x60, 0x03, "Pic4" },
	{ 0x60, 0x04, "Pic5" },
	{ 0x60, 0x05, "Pic6" },
	{ 0x60, 0x06, "Pic7" },
	{ 0x60, 0x07, "Pic8" },
	{ 0x60, 0x08, "Pic9" },
	{ 0x60, 0x09, "Pic0" },
	
	{ 0x61, 0x00, "GDB1" },
	{ 0x61, 0x01, "GDB2" },
	{ 0x61, 0x02, "GDB3" },
	{ 0x61, 0x03, "GDB4" },
	{ 0x61, 0x04, "GDB5" },
	{ 0x61, 0x05, "GDB6" },
	{ 0x61, 0x06, "GDB7" },
	{ 0x61, 0x07, "GDB8" },
	{ 0x61, 0x08, "GDB9" },
	{ 0x61, 0x09, "GDB0" },
	
	{ 0x62, 0x01, "[RegEQ]" },
	{ 0x62, 0x02, "[n]" },
	{ 0x62, 0x03, "[xhat]" },
	{ 0x62, 0x04, "[Sigmax]" },
	{ 0x62, 0x05, "[Sigmax^2]" },
	{ 0x62, 0x06, "[Sx]" },
	{ 0x62, 0x07, "[sigmax]" },
	{ 0x62, 0x08, "[minX]" },
	{ 0x62, 0x09, "[maxX]" },
	{ 0x62, 0x0A, "[minY]" },
	{ 0x62, 0x0B, "[maxY]" },
	{ 0x62, 0x0C, "[yhat]" },
	{ 0x62, 0x0D, "[Sigmay]" },
	{ 0x62, 0x0E, "[Sigmay^2]" },
	{ 0x62, 0x0F, "[Sy]" },
	{ 0x62, 0x10, "[sigmay]" },
	{ 0x62, 0x11, "[sigmaxy]" },
	{ 0x62, 0x12, "[r]" },
	{ 0x62, 0x13, "[Med]" },
	{ 0x62, 0x14, "[Q1]" },
	{ 0x62, 0x15, "[Q3]" },
	{ 0x62, 0x16, "[|a]" },
	{ 0x62, 0x17, "[|b]" },
	{ 0x62, 0x18, "[|c]" },
	{ 0x62, 0x19, "[|d]" },
	{ 0x62, 0x1A, "[|e]" },
	{ 0x62, 0x1B, "[x1]" },
	{ 0x62, 0x1C, "[x2]" },
	{ 0x62, 0x1D, "[x3]" },
	{ 0x62, 0x1E, "[y1]" },
	{ 0x62, 0x1F, "[y2]" },
	{ 0x62, 0x20, "[y3]" },
	{ 0x62, 0x21, "[recursiven]" },
	{ 0x62, 0x22, "[p]" },
	{ 0x62, 0x23, "[z]" },
	{ 0x62, 0x24, "[t]" },
	{ 0x62, 0x25, "[chi^2]" },
	{ 0x62, 0x26, "[|F]" },
	{ 0x62, 0x27, "[df]" },
	{ 0x62, 0x28, "[phat]" },
	{ 0x62, 0x29, "[phat1]" },
	{ 0x62, 0x2A, "[phat2]" },
	{ 0x62, 0x2B, "[xhat1]" },
	{ 0x62, 0x2C, "[Sx1]" },
	{ 0x62, 0x2D, "[n1]" },
	{ 0x62, 0x2E, "[xhat2]" },
	{ 0x62, 0x2F, "[Sx2]" },
	{ 0x62, 0x30, "[n2]" },
	{ 0x62, 0x31, "[Sxp]" },
	{ 0x62, 0x32, "[lower]" },
	{ 0x62, 0x33, "[upper]" },
	{ 0x62, 0x34, "[s]" },
	{ 0x62, 0x35, "[r^2]" },
	{ 0x62, 0x36, "[R^2]" },
	{ 0x62, 0x37, "[factordf]" },
	{ 0x62, 0x38, "[factorSS]" },
	{ 0x62, 0x39, "[factorMS]" },
	{ 0x62, 0x3A, "[errordf]" },
	{ 0x62, 0x3B, "[errorSS]" },
	{ 0x62, 0x3C, "[errorMS]" },
	
	{ 0x63, 0x00, "ZXscl" },
	{ 0x63, 0x01, "ZYscl" },
	{ 0x63, 0x02, "Xscl" },
	{ 0x63, 0x03, "Yscl" },
	{ 0x63, 0x04, "u(nMin)" },
	{ 0x63, 0x05, "v(nMin)" },
	{ 0x63, 0x06, "Un-1" },
	{ 0x63, 0x07, "Vn-1" },
	{ 0x63, 0x08, "Zu(nmin)" },
	{ 0x63, 0x09, "Zv(nmin)" },
	{ 0x63, 0x0A, "Xmin" },
	{ 0x63, 0x0B, "Xmax" },
	{ 0x63, 0x0C, "Ymin" },
	{ 0x63, 0x0D, "Ymax" },
	{ 0x63, 0x0E, "Tmin" },
	{ 0x63, 0x0F, "Tmax" },
	{ 0x63, 0x10, "thetamin" },
	{ 0x63, 0x11, "thetamax" },
	{ 0x63, 0x12, "ZXmin" },
	{ 0x63, 0x13, "ZXmax" },
	{ 0x63, 0x14, "ZYmin" },
	{ 0x63, 0x15, "ZYmax" },
	{ 0x63, 0x16, "Zthetamin" },
 	{ 0x63, 0x17, "Zthetamax" },
	{ 0x63, 0x18, "ZTmin" },
	{ 0x63, 0x19, "ZTmax" },
	{ 0x63, 0x1A, "TblStart" },
	{ 0x63, 0x1B, "PlotStart" },
	{ 0x63, 0x1C, "ZPlotStart" },
	{ 0x63, 0x1D, "nMax" },
	{ 0x63, 0x1E, "ZnMax" },
	{ 0x63, 0x1F, "nMin" },
	{ 0x63, 0x20, "ZnMin" },
	{ 0x63, 0x21, "DeltaTbl" },
	{ 0x63, 0x22, "Tstep" },
	{ 0x63, 0x23, "thetastep" },
	{ 0x63, 0x24, "ZTstep" },
	{ 0x63, 0x25, "Zthetastep" },
	{ 0x63, 0x26, "DeltaX" },
	{ 0x63, 0x27, "DeltaY" },
	{ 0x63, 0x28, "XFact" },
	{ 0x63, 0x29, "YFact" },
	{ 0x63, 0x2A, "TblInput" },
	{ 0x63, 0x2B, "|N" },
	{ 0x63, 0x2C, "I%" },
	{ 0x63, 0x2D, "PV" },
	{ 0x63, 0x2E, "PMT" },
	{ 0x63, 0x2F, "FV" },
	{ 0x63, 0x30, "|P/Y" },
	{ 0x63, 0x31, "|C/Y" },
	{ 0x63, 0x32, "w(nMin)" },
	{ 0x63, 0x33, "Zw(nMin)" },
	{ 0x63, 0x34, "PlotStep" },
	{ 0x63, 0x35, "ZPlotStep" },
	{ 0x63, 0x36, "Xres" },
	{ 0x63, 0x37, "ZXres" },

	{ 0x64, NONE, "Radian" },
	{ 0x65, NONE, "Degree" },
	{ 0x66, NONE, "Normal" },
	{ 0x67, NONE, "Sci" },
	{ 0x68, NONE, "Eng" },
	{ 0x69, NONE, "Float" },
	{ 0x6A, NONE, "=" },
	{ 0x6B, NONE, "<" },
	{ 0x6C, NONE, ">" },
	{ 0x6D, NONE, "<=" },
	{ 0x6E, NONE, ">=" },
	{ 0x6F, NONE, "!=" },
	{ 0x70, NONE, "+" },
	{ 0x71, NONE, "-" },
	{ 0x72, NONE, "Ans" },
	{ 0x73, NONE, "Fix " },
	{ 0x74, NONE, "Horiz" },
	{ 0x75, NONE, "Full" },
	{ 0x76, NONE, "Func" },
	{ 0x77, NONE, "Param" },
	{ 0x78, NONE, "Polar" },
	{ 0x79, NONE, "Seq" },
	{ 0x7A, NONE, "IndpntAuto" },
	{ 0x7B, NONE, "IndpntAsk" },
	{ 0x7C, NONE, "DependAuto" },
	{ 0x7D, NONE, "DependAsk" },
	
	{ 0x7E, 0x00, "Sequential" },
	{ 0x7E, 0x01, "Simul" },
	{ 0x7E, 0x02, "PolarGC" },
	{ 0x7E, 0x03, "RectGC" },
	{ 0x7E, 0x04, "CoordOn" },
	{ 0x7E, 0x05, "CoordOff" },
	{ 0x7E, 0x06, "Connected" },
	{ 0x7E, 0x07, "Dot" },
	{ 0x7E, 0x08, "AxesOn" },
	{ 0x7E, 0x09, "AxesOff" },
	{ 0x7E, 0x0A, "GridOn" },
	{ 0x7E, 0x0B, "GridOff" },
	{ 0x7E, 0x0C, "LabelOn" },
	{ 0x7E, 0x0D, "LabelOff" },
	{ 0x7E, 0x0E, "Web" },
	{ 0x7E, 0x0F, "Time" },
	{ 0x7E, 0x10, "uvAxes" },
	{ 0x7E, 0x11, "vwAxes" },
	{ 0x7E, 0x12, "uwAxes" },
	
	{ 0x7F, NONE, "plotsquare" },
	{ 0x7F, NONE, "squareplot" },
	{ 0x80, NONE, "plotcross" },
	{ 0x80, NONE, "crossplot" },
	{ 0x81, NONE, "plotdot" },
	{ 0x81, NONE, "dotplot" },
	{ 0x82, NONE, "*" },
	{ 0x83, NONE, "/" },
	{ 0x84, NONE, "Trace" },
	{ 0x85, NONE, "ClrDraw" },
	{ 0x86, NONE, "ZStandard" },
	{ 0x87, NONE, "ZBox" },
	{ 0x88, NONE, "Zoom In" },
	{ 0x89, NONE, "Zoom Out" },
	{ 0x8A, NONE, "ZSquare" },
	{ 0x8B, NONE, "ZInteger" },
	{ 0x8C, NONE, "ZPrevious" },
	{ 0x8D, NONE, "ZDecimal" },
	{ 0x8E, NONE, "ZoomStat" },
	{ 0x8F, NONE, "ZoomRcl" },
	{ 0x91, NONE, "PrintScreen" },
	{ 0x92, NONE, "ZoomSto" },
	{ 0x93, NONE, "Text(" },
	{ 0x94, NONE, " nPr " },
	{ 0x95, NONE, " nCr " },
	{ 0x96, NONE, "FnOn" },
	{ 0x97, NONE, "FnOff" },
	{ 0x98, NONE, "StorePic" },
	{ 0x99, NONE, "RecallPic" },
	{ 0x9A, NONE, "StoreGDB" },
	{ 0x9B, NONE, "RecallGDB" },
	{ 0x9C, NONE, "Line(" },
	{ 0x9D, NONE, "Vertical" },
	{ 0x9E, NONE, "Pt-On(" },
	{ 0x9F, NONE, "Pt-Off(" },
	{ 0xA0, NONE, "Pt-Change(" },
	{ 0xA1, NONE, "Pxl-On(" },
	{ 0xA2, NONE, "Pxl-Off(" },
	{ 0xA3, NONE, "Pxl-Change(" },
	{ 0xA4, NONE, "Shade(" },
	{ 0xA5, NONE, "Circle(" },
	{ 0xA6, NONE, "Horizontal" },
	{ 0xA7, NONE, "Tangent(" },
	{ 0xA8, NONE, "DrawInv" },
	{ 0xA9, NONE, "DrawF" },
	
	{ 0xAA, 0x00, "Str1" },
	{ 0xAA, 0x01, "Str2" },
	{ 0xAA, 0x02, "Str3" },
	{ 0xAA, 0x03, "Str4" },
	{ 0xAA, 0x04, "Str5" },
	{ 0xAA, 0x05, "Str6" },
	{ 0xAA, 0x06, "Str7" },
	{ 0xAA, 0x07, "Str8" },
	{ 0xAA, 0x08, "Str9" },
	{ 0xAA, 0x09, "Str0" },
	
	{ 0xAB, NONE, "rand" },
	{ 0xAC, NONE, "pi" },
	{ 0xAD, NONE, "getKey" },
	{ 0xAE, NONE, "'" },
	{ 0xAF, NONE, "?" },
	{ 0xB0, NONE, "~" },
	{ 0xB1, NONE, "int(" },
	{ 0xB2, NONE, "abs(" },
	{ 0xB3, NONE, "det(" },
	{ 0xB4, NONE, "identity(" },
	{ 0xB5, NONE, "dim(" },
	{ 0xB6, NONE, "sum(" },
	{ 0xB7, NONE, "prod(" },
	{ 0xB8, NONE, "not(" },
	{ 0xB9, NONE, "iPart(" },
	{ 0xBA, NONE, "fPart(" },

	{ 0xBB, 0x00, "npv(" },
	{ 0xBB, 0x01, "irr(" },
	{ 0xBB, 0x02, "bal(" },
	{ 0xBB, 0x03, "SigmaPrn(" },
	{ 0xBB, 0x04, "SigmaInt(" },
	{ 0xBB, 0x05, "Nom(" },
	{ 0xBB, 0x06, ">Eff(" },
	{ 0xBB, 0x07, "dbd(" },
	{ 0xBB, 0x08, "lcm(" },
	{ 0xBB, 0x09, "gcd(" },
	{ 0xBB, 0x0A, "randInt(" },
	{ 0xBB, 0x0B, "randBin(" },
	{ 0xBB, 0x0C, "sub(" },
	{ 0xBB, 0x0D, "stDev(" },
	{ 0xBB, 0x0E, "variance" },
	{ 0xBB, 0x0F, "inString(" },
	{ 0xBB, 0x10, "normalcdf(" },
	{ 0xBB, 0x11, "invNorm(" },
	{ 0xBB, 0x12, "tcdf(" },
	{ 0xBB, 0x13, "chi^2cdf(" },
	{ 0xBB, 0x14, "Fcdf(" },
	{ 0xBB, 0x15, "binompdf(" },
	{ 0xBB, 0x16, "binomcdf(" },
	{ 0xBB, 0x17, "poissonpdf(" },
	{ 0xBB, 0x18, "poissoncdf(" },
	{ 0xBB, 0x19, "geometpdf(" },
	{ 0xBB, 0x1A, "geometcdf(" },
	{ 0xBB, 0x1B, "normalpdf(" },
	{ 0xBB, 0x1C, "tpdf(" },
	{ 0xBB, 0x1D, "chi^2pdf(" },
	{ 0xBB, 0x1E, "Fpdf(" },
	{ 0xBB, 0x1F, "randNorm(" },
	{ 0xBB, 0x20, "tvm_Pmt" },
	{ 0xBB, 0x21, "tvm_I%" },
	{ 0xBB, 0x22, "tvm_PV" },
	{ 0xBB, 0x23, "tvm_N" },
	{ 0xBB, 0x24, "tvm_FV" },
	{ 0xBB, 0x25, "conj(" },
	{ 0xBB, 0x26, "real(" },
	{ 0xBB, 0x27, "imag(" },
	{ 0xBB, 0x28, "angle(" },
	{ 0xBB, 0x29, "cumSum(" },
	{ 0xBB, 0x2A, "expr(" },
	{ 0xBB, 0x2B, "length(" },
	{ 0xBB, 0x2C, "DeltaList(" },
	{ 0xBB, 0x2D, "ref(" },
	{ 0xBB, 0x2E, "rref(" },
	{ 0xBB, 0x2F, ">Rect" },
	{ 0xBB, 0x30, ">Polar" },
	{ 0xBB, 0x31, "[e]" },
	{ 0xBB, 0x32, "SinReg" },
	{ 0xBB, 0x33, "Logistic" },
	{ 0xBB, 0x34, "LinRegTTest" },
	{ 0xBB, 0x35, "ShadeNorm(" },
	{ 0xBB, 0x36, "Shade_t(" },
	{ 0xBB, 0x37, "Shadechi^2" },
	{ 0xBB, 0x38, "ShadeF(" },
	{ 0xBB, 0x39, "Matr>list(" },
	{ 0xBB, 0x3A, "List>matr(" },
	{ 0xBB, 0x3B, "Z-Test(" },
	{ 0xBB, 0x3C, "T-Test(" },
	{ 0xBB, 0x3D, "2-SampZTest(" },
	{ 0xBB, 0x3E, "1-PropZTest(" },
	{ 0xBB, 0x3F, "2-PropZTest(" },
	{ 0xBB, 0x40, "chi^2-Test(" },
	{ 0xBB, 0x41, "ZInterval" },
	{ 0xBB, 0x42, "2-SampZInt(" },
	{ 0xBB, 0x43, "1-PropZInt(" },
	{ 0xBB, 0x44, "2-PropZInt(" },
	{ 0xBB, 0x45, "GraphStyle(" },
	{ 0xBB, 0x46, "2-SampTTest(" },
	{ 0xBB, 0x47, "2-SampFTest(" },
	{ 0xBB, 0x48, "TInterval" },
	{ 0xBB, 0x49, "2-SampTInt" },
	{ 0xBB, 0x4A, "SetUpEditor" },
	{ 0xBB, 0x4B, "Pmt_End" },
	{ 0xBB, 0x4C, "Pmt_Bgn" },
	{ 0xBB, 0x4D, "Real" },
	{ 0xBB, 0x4E, "re^thetai" },
	{ 0xBB, 0x4F, "a+bi" },
	{ 0xBB, 0x50, "ExprOn" },
	{ 0xBB, 0x51, "ExprOff" },
	{ 0xBB, 0x52, "ClrAllLists" },
	{ 0xBB, 0x53, "GetCalc(" },
	{ 0xBB, 0x54, "DelVar " },
	{ 0xBB, 0x55, "Equ>String(" },
	{ 0xBB, 0x56, "String>Equ(" },
	{ 0xBB, 0x57, "Clear Entries" },
	{ 0xBB, 0x58, "Select(" },
	{ 0xBB, 0x59, "ANOVA(" },
	{ 0xBB, 0x5A, "ModBoxPlot" },
	{ 0xBB, 0x5B, "NormProbPlot" },
	{ 0xBB, 0x64, "G-T" },
	{ 0xBB, 0x65, "ZoomFit" },
	{ 0xBB, 0x66, "DiagnosticOn" },
	{ 0xBB, 0x67, "DiagnosticOff" },
	{ 0xBB, 0x68, "Archive" },
	{ 0xBB, 0x69, "UnArchive" },
	{ 0xBB, 0x6A, "Asm(" },
	{ 0xBB, 0x6B, "AsmComp(" },
	{ 0xBB, 0x6C, "AsmPrgm" },
	{ 0xBB, 0x6E, "Á" },
	{ 0xBB, 0x6F, "À" },
	{ 0xBB, 0x70, "Â" },
	{ 0xBB, 0x71, "Ä" },
	{ 0xBB, 0x72, "á" },
	{ 0xBB, 0x73, "à" },
	{ 0xBB, 0x74, "â" },
	{ 0xBB, 0x75, "ä" },
	{ 0xBB, 0x76, "É" },
	{ 0xBB, 0x77, "È" },
	{ 0xBB, 0x78, "Ê" },
	{ 0xBB, 0x79, "Ë" },
	{ 0xBB, 0x7A, "é" },
	{ 0xBB, 0x7B, "è" },
	{ 0xBB, 0x7C, "ê" },
	{ 0xBB, 0x7D, "ë" },
	{ 0xBB, 0x7F, "Ì" },
	{ 0xBB, 0x80, "Î" },
	{ 0xBB, 0x81, "Ï" },
	{ 0xBB, 0x82, "í" },
	{ 0xBB, 0x83, "ì" },
	{ 0xBB, 0x84, "î" },
	{ 0xBB, 0x85, "ï" },
	{ 0xBB, 0x86, "Ó" },
	{ 0xBB, 0x87, "Ò" },
	{ 0xBB, 0x88, "Ô" },
	{ 0xBB, 0x89, "Ö" },
	{ 0xBB, 0x8A, "ó" },
	{ 0xBB, 0x8B, "ò" },
	{ 0xBB, 0x8C, "ô" },
	{ 0xBB, 0x8D, "ö" },
	{ 0xBB, 0x8E, "Ú" },
	{ 0xBB, 0x8F, "Ù" },
	{ 0xBB, 0x90, "Û" },
	{ 0xBB, 0x91, "Ü" },
	{ 0xBB, 0x92, "ú" },
	{ 0xBB, 0x93, "ù" },
	{ 0xBB, 0x94, "û" },
	{ 0xBB, 0x95, "ü" },
	{ 0xBB, 0x96, "Ç" },
	{ 0xBB, 0x97, "ç" },
	{ 0xBB, 0x98, "Ñ" },
	{ 0xBB, 0x99, "ñ" },
	{ 0xBB, 0x9A, "^^'" },
	{ 0xBB, 0x9A, "|'" },
	{ 0xBB, 0x9B, "^^`" },
	{ 0xBB, 0x9B, "|`" },
	{ 0xBB, 0x9C, "^^:" },
	{ 0xBB, 0x9C, "|:" },
	{ 0xBB, 0x9D, "|?" },
	{ 0xBB, 0x9D, "¿" },
	{ 0xBB, 0x9E, "|!" },
	{ 0xBB, 0x9E, "¡" },
	{ 0xBB, 0x9F, "alpha" },
	{ 0xBB, 0xA0, "beta" },
	{ 0xBB, 0xA1, "gamma" },
	{ 0xBB, 0xA2, "Delta" },
	{ 0xBB, 0xA3, "delta" },
	{ 0xBB, 0xA4, "epsilon" },
	{ 0xBB, 0xA5, "lambda" },
	{ 0xBB, 0xA6, "mu" },
	{ 0xBB, 0xA7, "greek_pi" },
	{ 0xBB, 0xA8, "rho" },
	{ 0xBB, 0xA9, "Sigma" },
	{ 0xBB, 0xAB, "Phi" },
	{ 0xBB, 0xAC, "Omega" },
	{ 0xBB, 0xAD, "phat" },
	{ 0xBB, 0xAE, "chi" },
	{ 0xBB, 0xAF, "|F" },
	{ 0xBB, 0xB0, "a" },
	{ 0xBB, 0xB0, "\\a" },
	{ 0xBB, 0xB1, "b" },
	{ 0xBB, 0xB1, "\\b" },
	{ 0xBB, 0xB2, "c" },
	{ 0xBB, 0xB2, "\\c" },
	{ 0xBB, 0xB3, "d" },
	{ 0xBB, 0xB3, "\\d" },
	{ 0xBB, 0xB4, "e" },
	{ 0xBB, 0xB4, "\\e" },
	{ 0xBB, 0xB5, "f" },
	{ 0xBB, 0xB5, "\\f" },
	{ 0xBB, 0xB6, "g" },
	{ 0xBB, 0xB6, "\\g" },
	{ 0xBB, 0xB7, "h" },
	{ 0xBB, 0xB7, "\\h" },
	{ 0xBB, 0xB8, "i" },
	{ 0xBB, 0xB8, "\\i" },
	{ 0xBB, 0xB9, "j" },
	{ 0xBB, 0xB9, "\\j" },
	{ 0xBB, 0xBA, "k" },
	{ 0xBB, 0xBA, "\\k" },
	{ 0xBB, 0xBC, "l" },
	{ 0xBB, 0xBC, "\\l" },
	{ 0xBB, 0xBD, "m" },
	{ 0xBB, 0xBD, "\\m" },
	{ 0xBB, 0xBE, "n" },
	{ 0xBB, 0xBE, "\\n" },
	{ 0xBB, 0xBF, "o" },
	{ 0xBB, 0xBF, "\\o" },
	{ 0xBB, 0xC0, "p" },
	{ 0xBB, 0xC0, "\\p" },
	{ 0xBB, 0xC1, "q" },
	{ 0xBB, 0xC1, "\\q" },
	{ 0xBB, 0xC2, "r" },
	{ 0xBB, 0xC2, "\\r" },
	{ 0xBB, 0xC3, "s" },
	{ 0xBB, 0xC3, "\\s" },
	{ 0xBB, 0xC4, "t" },
	{ 0xBB, 0xC4, "\\t" },
	{ 0xBB, 0xC5, "u" },
	{ 0xBB, 0xC5, "\\u" },
	{ 0xBB, 0xC6, "v" },
	{ 0xBB, 0xC6, "\\v" },
	{ 0xBB, 0xC7, "w" },
	{ 0xBB, 0xC7, "\\w" },
	{ 0xBB, 0xC8, "x" },
	{ 0xBB, 0xC8, "\\x" },
	{ 0xBB, 0xC9, "y" },
	{ 0xBB, 0xC9, "\\y" },
	{ 0xBB, 0xCA, "z" },
	{ 0xBB, 0xCA, "\\z" },
	{ 0xBB, 0xCB, "sigma" },
	{ 0xBB, 0xCC, "tau" },
	{ 0xBB, 0xCD, "Í" },
	{ 0xBB, 0xCE, "GarbageCollect" },
	{ 0xBB, 0xCF, "|~" },
	{ 0xBB, 0xD1, "@" },
	{ 0xBB, 0xD2, "#" },
	{ 0xBB, 0xD3, "$" },
	{ 0xBB, 0xD4, "&" },
	{ 0xBB, 0xD5, "`" },
	{ 0xBB, 0xD6, ";" },
	{ 0xBB, 0xD7, "\\" },
	{ 0xBB, 0xD8, "|" },
	{ 0xBB, 0xD9, "_" },
	{ 0xBB, 0xDA, "%" },
	{ 0xBB, 0xDB, "..." },
	{ 0xBB, 0xDC, "|<" },
	{ 0xBB, 0xDD, "sharps" },
	{ 0xBB, 0xDE, "^^x" },
	{ 0xBB, 0xDF, "smallT" },
	{ 0xBB, 0xE0, "small0" },
	{ 0xBB, 0xE1, "small1" },
	{ 0xBB, 0xE2, "small2" },
	{ 0xBB, 0xE3, "small3" },
	{ 0xBB, 0xE4, "small4" },
	{ 0xBB, 0xE5, "small5" },
	{ 0xBB, 0xE6, "small6" },
	{ 0xBB, 0xE7, "small7" },
	{ 0xBB, 0xE8, "small8" },
	{ 0xBB, 0xE9, "small9" },
	{ 0xBB, 0xEA, "small10" },
	{ 0xBB, 0xEB, "<|" },
	{ 0xBB, 0xEC, "|>" },
	{ 0xBB, 0xED, "uparrow" },
	{ 0xBB, 0xEE, "downarrow" },
	{ 0xBB, 0xF0, "xmark" },
	{ 0xBB, 0xF1, "integral" },
	{ 0xBB, 0xF2, "bolduparrow" },
	{ 0xBB, 0xF3, "bolddownarrow" },
	{ 0xBB, 0xF4, "squareroot" },
	{ 0xBB, 0xF5, "invertedequal" },
		
	{ 0xBC, NONE, "sqrt(" },
	{ 0xBD, NONE, "cuberoot(" },
	{ 0xBE, NONE, "ln(" },
	{ 0xBF, NONE, "e^(" },
	{ 0xC0, NONE, "log(" },
	{ 0xC1, NONE, "10^" },
	{ 0xC2, NONE, "sin(" },
	{ 0xC3, NONE, "sin^-1(" },
	{ 0xC4, NONE, "cos(" },
	{ 0xC5, NONE, "cos^-1(" },
	{ 0xC6, NONE, "tan(" },
	{ 0xC7, NONE, "tan^-1(" },
	{ 0xC8, NONE, "sinh(" },
	{ 0xC9, NONE, "sinh^-1(" },
	{ 0xCA, NONE, "cosh(" },
	{ 0xCB, NONE, "cosh^-1(" },
	{ 0xCC, NONE, "tanh(" },
	{ 0xCD, NONE, "tanh^-1(" },
	{ 0xCE, NONE, "If " },
	{ 0xD0, NONE, "Else" },
	{ 0xD1, NONE, "While " },
	{ 0xD2, NONE, "Repeat " },
	{ 0xD3, NONE, "For(" },
	{ 0xD4, NONE, "End" },
	{ 0xD5, NONE, "Return" },
	{ 0xD6, NONE, "Lbl " },
	{ 0xD7, NONE, "Goto " },
	{ 0xD8, NONE, "Pause" },
	{ 0xD9, NONE, "Stop" },
	{ 0xDA, NONE, "IS>(" },
	{ 0xDB, NONE, "DS<" },
	{ 0xDC, NONE, "Input " },
	{ 0xDD, NONE, "Prompt " },
	{ 0xDE, NONE, "Disp " },
	{ 0xDF, NONE, "DispGraph" },
	{ 0xE0, NONE, "Output(" },
	{ 0xE1, NONE, "ClrHome" },
	{ 0xE2, NONE, "Fill(" },
	{ 0xE3, NONE, "SortA(" },
	{ 0xE4, NONE, "SortD(" },
	{ 0xE5, NONE, "DispTable" },
	{ 0xE6, NONE, "Menu(" },
	{ 0xE7, NONE, "Send(" },
	{ 0xE8, NONE, "Get(" },
	{ 0xE9, NONE, "PlotsOn " },
	{ 0xEA, NONE, "PlotsOff " },
	{ 0xEB, NONE, "|L" },
	{ 0xEC, NONE, "Plot1(" },
	{ 0xED, NONE, "Plot2(" },
	{ 0xEE, NONE, "Plot3(" },
	
	{ 0xEF, 0x00, "setDate(" },
	{ 0xEF, 0x01, "setTime(" },
	{ 0xEF, 0x02, "checkTmr(" },
	{ 0xEF, 0x03, "setDtFmt(" },
	{ 0xEF, 0x04, "setTmFmt(" },
	{ 0xEF, 0x05, "timeCnv(" },
	{ 0xEF, 0x06, "dayOfWk(" },
	{ 0xEF, 0x07, "getDtStr(" },
	{ 0xEF, 0x08, "getTmStr(" },
	{ 0xEF, 0x09, "getDate" },
	{ 0xEF, 0x0A, "getTime" },
	{ 0xEF, 0x0B, "startTmr" },
	{ 0xEF, 0x0C, "getDtFmt" },
	{ 0xEF, 0x0D, "getTmFmt" },
	{ 0xEF, 0x0E, "isClockOn" },
	{ 0xEF, 0x0F, "ClockOff" },
	{ 0xEF, 0x10, "ClockOn" },
	{ 0xEF, 0x11, "OpenLib(" },
	{ 0xEF, 0x12, "ExecLib" },
	{ 0xEF, 0x13, "invT(" },
	{ 0xEF, 0x14, "chi^2GOF-Test(" },
	{ 0xEF, 0x15, "LinRegTInt" },
	{ 0xEF, 0x16, "Manual-Fit" },
	{ 0xEF, 0x17, "ZQuadrant1" },
	{ 0xEF, 0x18, "ZFrac1/2" },
	{ 0xEF, 0x19, "ZFrac1/3" },
	{ 0xEF, 0x1A, "ZFrac1/4" },
	{ 0xEF, 0x1B, "ZFrac1/5" },
	{ 0xEF, 0x1C, "ZFrac1/8" },
	{ 0xEF, 0x1D, "ZFrac1/10" },
	{ 0xEF, 0x1E, "mathprintbox" },
	{ 0xEF, 0x2E, "n/d" },
	{ 0xEF, 0x2F, "Un/d" },
	{ 0xEF, 0x30, ">n/d<>Un/d" },
	{ 0xEF, 0x31, ">F<>D" },
	{ 0xEF, 0x32, "remainder(" },
	{ 0xEF, 0x33, "Sigma(" },
	{ 0xEF, 0x34, "logBASE(" },
	{ 0xEF, 0x35, "randIntNoRep(" },
	{ 0xEF, 0x37, "[MATHPRINT]" },
	{ 0xEF, 0x38, "[CLASSIC]" },
	{ 0xEF, 0x39, "[n/d]" },
	{ 0xEF, 0x3A, "[Un/d]" },
	{ 0xEF, 0x3A, "[AUTO]" },
	{ 0xEF, 0x3A, "[DEC]" },
	{ 0xEF, 0x3A, "[FRAC]" },
	
	{ 0xF0, NONE, "^" },
	{ 0xF1, NONE, "xroot" },
	{ 0xF2, NONE, "1-Var Stats " },
	{ 0xF3, NONE, "2-Var Stats " },
	{ 0xF4, NONE, "LinReg(a+bx) " },
	{ 0xF5, NONE, "ExpReg " },
	{ 0xF6, NONE, "LnReg " },
	{ 0xF7, NONE, "PwrReg " },
	{ 0xF8, NONE, "Med-Med " },
	{ 0xF9, NONE, "QuadReg " },
	{ 0xFA, NONE, "ClrList " },
	{ 0xFB, NONE, "ClrTable" },
	{ 0xFC, NONE, "Histogram" },
	{ 0xFD, NONE, "xyLine" },
	{ 0xFE, NONE, "Scatter" },
	{ 0xFF, NONE, "LinReg(ax+b) " },
};

token t_axe[] = {
	{ 0x01, NONE, ">Tok" },
	{ 0x03, NONE, ">Char" },
	
	{ 0x5E, 0x80, "var" },
	{ 0x5E, 0x81, "appv" },
	{ 0x5E, 0x82, "tmp" },
	
	{ 0xA7, NONE, "Bitmap(" },
	{ 0xA9, NONE, "Text " },
	{ 0xB1, NONE, "sign{" },
	{ 0xB3, NONE, "Buff(" },
	{ 0xB4, NONE, "#Icon(" },
	{ 0xB9, NONE, "nib{" },
	{ 0xBA, NONE, "float{" },

	{ 0xBB, 0x0F, "inData(" },
	{ 0xBB, 0x25, "Copy(" },
	{ 0xBB, 0x26, "#Realloc" },
	{ 0xBB, 0x2A, "Exch(" },
	{ 0xBB, 0x2B, "length(" },
	{ 0xBB, 0x2C, "Data(" },
	{ 0xBB, 0x2D, "Rect(" },
	{ 0xBB, 0x2E, "RectI(" },
	{ 0xBB, 0x2F, ">Hex" },
	{ 0xBB, 0x32, "Freq(" },
	{ 0xBB, 0x35, "rotC(" },
	{ 0xBB, 0x36, "rotCC(" },
	{ 0xBB, 0x37, "flipV(" },
	{ 0xBB, 0x38, "flipH(" },
	{ 0xBB, 0x50, "#ExprOn" },
	{ 0xBB, 0x51, "#ExprOff" },
	{ 0xBB, 0x6B, "#Axiom(" },
	
	{ 0xC0, NONE, "lambda(" },
	{ 0xE8, NONE, "Get" },
	{ 0xEC, NONE, "Pt-Mask(" },
	{ 0xED, NONE, "pt-Get(" },
	{ 0xEE, NONE, "Pt-And(" },
	{ 0xF6, NONE, "LnReg" },
	{ 0xFB, NONE, "port" }
};

token t_grammer[] = {
	{ 0x03, NONE, ">lFactor" },
	{ 0x14, NONE, "Insert(" },
	{ 0x1B, NONE, "ClrPart" },
	{ 0x1C, NONE, "RunPart" },
	{ 0x1D, NONE, "AddPart(" },
	{ 0x1E, NONE, "PartType(" },
	{ 0x22, NONE, "Misc(" },
	{ 0x2C, NONE, " underscore " },
	{ 0x5F, NONE, "call " },
	{ 0x9C, NONE, "Rect(" },
	{ 0x9E, NONE, "Tile(" },
	{ 0x9F, NONE, "Sprite(" },
	{ 0xA0, NONE, "TileMap(" },
	{ 0xA4, NONE, "Contrast(" },
	{ 0xA7, NONE, "ShiftBuf(" },
	{ 0xB1, NONE, "WriteB(" },
	{ 0xB8, NONE, "Inv(" },
	{ 0xB9, NONE, "WriteW(" },
	{ 0xBF, NONE, "2^(" },
	{ 0xDA, NONE, "GetInc(" },
	{ 0xDE, NONE, "SetBuf(" },
	{ 0xE0, NONE, "SetFont " },
	{ 0xE7, NONE, "MakeVar(" },
	{ 0xE8, NONE, "FindVar(" }
};

/* will contain non-editor friendly
 * representations of tokens for
 * prettier output */
token t_pretty_basic[] = {
	{ 0x01, NONE, "►DMS" },
	{ 0x02, NONE, "►Dec" },
	{ 0x03, NONE, "►Frac" },
	{ 0x04, NONE, "→" },
	{ 0x0A, NONE, "ʳ" },
	{ 0x0B, NONE, "°" },
	{ 0x0C, NONE, "ˉ¹" },
	{ 0x0D, NONE, "²" },
	{ 0x0E, NONE, "ᵀ" },
	{ 0x0F, NONE, "³" },
	{ 0x1B, NONE, "R►Pr(" },
	{ 0x1C, NONE, "R►PΘ(" },
	{ 0x1D, NONE, "P►Rx(" },
	{ 0x1E, NONE, "P►Ry(" },
	{ 0x3B, NONE, "ᴇ" },
	{ 0x5B, NONE, "Θ" },
	
	{ 0x5D, 0x00, "L₁" },
	{ 0x5D, 0x01, "L₂" },
	{ 0x5D, 0x02, "L₃" },
	{ 0x5D, 0x03, "L₄" },
	{ 0x5D, 0x04, "L₅" },
	{ 0x5D, 0x05, "L₆" },
	
	{ 0x5E, 0x10, "Y₁" },
	{ 0x5E, 0x11, "Y₂" },
	{ 0x5E, 0x12, "Y₃" },
	{ 0x5E, 0x13, "Y₄" },
	{ 0x5E, 0x14, "Y₅" },
	{ 0x5E, 0x15, "Y₆" },
	{ 0x5E, 0x16, "Y₇" },
	{ 0x5E, 0x17, "Y₈" },
	{ 0x5E, 0x18, "Y₉" },
	{ 0x5E, 0x19, "Y₀" },
	{ 0x5E, 0x20, "X₁ᴛ" },
	{ 0x5E, 0x21, "Y₁ᴛ" },
	{ 0x5E, 0x22, "X₂ᴛ" },
	{ 0x5E, 0x23, "Y₂ᴛ" },
	{ 0x5E, 0x24, "X₃ᴛ" },
	{ 0x5E, 0x25, "Y₃ᴛ" },
	{ 0x5E, 0x26, "X₄ᴛ" },
	{ 0x5E, 0x27, "Y₄ᴛ" },
	{ 0x5E, 0x28, "X₅ᴛ" },
	{ 0x5E, 0x29, "Y₅ᴛ" },
	{ 0x5E, 0x2A, "X₆ᴛ" },
	{ 0x5E, 0x2B, "Y₆ᴛ" },
	{ 0x5E, 0x40, "r₁" },
	{ 0x5E, 0x41, "r₂" },
	{ 0x5E, 0x42, "r₃" },
	{ 0x5E, 0x43, "r₄" },
	{ 0x5E, 0x44, "r₅" },
	{ 0x5E, 0x45, "r₆" },
	{ 0x5E, 0x80, "u" },
	{ 0x5E, 0x81, "v" },
	{ 0x5E, 0x82, "w" },
	
	{ 0x63, 0x10, "ΘMin" },
	{ 0x63, 0x11, "ΘMax" },
	{ 0x63, 0x16, "ZΘMin" },
	{ 0x63, 0x17, "ZΘMax" },
	{ 0x63, 0x21, "ΔTbl" },
	{ 0x63, 0x23, "Θstep" },
	{ 0x63, 0x25, "ZΘstep" },
	{ 0x63, 0x26, "ΔX" },
	{ 0x63, 0x27, "ΔY" },
	
	{ 0xBB, 0x9D, "¿" },
	{ 0xBB, 0x9D, "¡" },
	{ 0xBB, 0x9F, "α" },
	{ 0xBB, 0xA0, "β" },
	{ 0xBB, 0xA1, "γ" },
	{ 0xBB, 0xA2, "Δ" },
	{ 0xBB, 0xA6, "μ" },
};

token t_pretty_axe[] = {
	{ 0x01, NONE, "►Tok" },
	{ 0x03, NONE, "►Char" },
};

token t_pretty_grammer[] = {
	{ 0x03, NONE, "►lFactor" },
};

/* preprocessor tokens, because it's actually
 * easier to do the "preprocessing" post
 * processing(for things other than ##define.
 * don't forget to add in a -p option for
 * defining an option to pass to ##if ##else
 * ##end! */
token t_preproc[] = {
	{ NONE, NONE, "##define" },
	{ NONE, NONE, "##include" },
	{ NONE, NONE, "##if" },
	{ NONE, NONE, "##else" },
	{ NONE, NONE, "##end" },
};

token *t_lists[] = {
	t_basic,
	t_axe,
	t_grammer,
	t_pretty_basic,
	t_pretty_axe,
	t_pretty_grammer,
	t_preproc
};

const char* set_names[] = {
	"BASIC",
	"Axe",
	"Grammer",
	"BASIC",
	"Axe",
	"Grammer"
};

int t_list_lengths[] = {
	(int)(sizeof(t_basic)/sizeof(token)),
	(int)(sizeof(t_axe)/sizeof(token)),
	(int)(sizeof(t_grammer)/sizeof(token)),
	(int)(sizeof(t_pretty_basic)/sizeof(token)),
	(int)(sizeof(t_pretty_axe)/sizeof(token)),
	(int)(sizeof(t_pretty_grammer)/sizeof(token)),
	(int)(sizeof(t_preproc)/sizeof(token))
};

/* list of values for determining, when converting
 * from tokens to plaintext, if the second byte
 * should be considered */
uint8_t t_2byte_indicators[] = {
	/* Matrices */
	0x5C,
	/* Lists */
	0x5D,
	/* Equations */
	0x5E,
	/* Pictures */
	0x60,
	/* GDBs */
	0x61,
	/* Strings */
	0xAA,
	/* Statistics */
	0x62,
	/* Window and Finance */
	0x63,
	/* Graph Format */
	0x7E,
	/* Miscellaneous */
	0xBB,
	/* 84+ only */
	0xEF
};
