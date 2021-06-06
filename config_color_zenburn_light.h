// TODO For light theme: green, blue and yellow need higher contrast
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	//"#1f1f1f", /*  0 normal black. high-contrast bg in vim zenburn */
	"#3f3f3f", /*  0 normal black. normal bg in vim zenburn */
    /*"#705050", *//*  1 normal red     */
	"#cc9393", /*  1 normal red     */
	"#87af87", /*  2 normal green   */
	"#f0deae", /*  3 normal yellow  */
	"#506070", /*  4 normal blue    */
	"#dc8cc3", /*  5 normal magenta */
	"#8cd0d3", /*  6 normal cyan    */
	"#dcdccc", /*  7 normal gray    */

	/* 8 bright colors */
	"#709080", /*  8 bright black   */
	"#dca3a3", /*  9 bright red     */
	"#72d5a3", /* 10 bright green   */
	"#dfcf9f", /* 11 bright yellow  */
	"#94bff3", /* 12 bright blue    */
	"#ec93d3", /* 13 bright magenta */
	"#93e0e3", /* 14 bright cyan    */
	"#ffffff", /* 15 bright white   */

	[255] = 0,
	/* more colors can be added after 255 to use with DefaultXX */

	//"#242424",  /* 256 background */
	//"#b2b2a0",  /* 257 foreground */

	//"#ffffff", //"#73635a",  /* 258 cursor */
	//"#dcdccc",  /* 259 reverse cursor */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultbg = 7;
unsigned int defaultfg = 0;
static unsigned int defaultcs = 0;
static unsigned int defaultrcs = 15;

/*
background            #3f3f3f  // grey
foreground            #dcdccc  // grey/white

cursor                #73635a  // brown-ish (pale)
selection_background  #21322f  // teal-ish (dark)

color0                #4d4d4d  // grey
color8                #709080  // green

color1                #705050  // red
color9                #dca3a3  // pink

color2                #60b48a  // green
color10               #c3bf9f  // yellow (pale)

color3                #f0deae  // yellow (a bit richer than above)
color11               #dfcf9f  // yellow (a bit richer than above)

color4                #506070  // blue (darker)
color12               #94bff3  // blue (brighter)

color5                #dc8cc3  // magenta
color13               #ec93d3  // magenta

color6                #8cd0d3  // teal
color14               #93e0e3  // teal

color7                #dcdccc  // white (yellowish grey)
color15               #ffffff  // white
*/
