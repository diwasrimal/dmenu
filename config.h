/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code Nerd Font:size=9:antialias=true",
	"NotoColorEmoji:size=9:antialias=true"
};
static const char *prompt      = " ";      /* -p  option; prompt to the left of input field */
static const char base[]           = "#1e1e2e";
static const char red[]            = "#f38ba8";
static const char rosewater[]      = "#f5e0dc";
static const char mantle[]         = "#181825";
static const char maroon[]         = "#eba0ac";
static const char blue[]           = "#89b4fa";
static const char peach[]          = 	"#fab387";

static const char *colors[SchemeLast][2] = {
	                        /*   fg     bg     */
	[SchemeNorm]          = { rosewater, base },
	[SchemeSel]           = { maroon, base },
	[SchemeNormHighlight] = { rosewater,   base },
	[SchemeSelHighlight]  = { maroon, "#45454e" },
	[SchemeOut]           = { "#00ff00", "#00ff00" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
