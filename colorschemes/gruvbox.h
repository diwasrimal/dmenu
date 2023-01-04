/* Gruvbox colorscheme for dmenu */

static const char black[]     = "#282828";
static const char white[]     = "#EBDBB2";
static const char orange[]    = "#D08770";
static const char yellow[]    = "#D79921";
static const char highlight[] = "#3C3836";

static const char *colors[SchemeLast][2] = {
	                        /*   fg     bg     */
	[SchemeNorm]          = { white, black },
	[SchemeSel]           = { yellow, black },
	[SchemeNormHighlight] = { white,   black },
	[SchemeSelHighlight]  = { yellow, highlight },
	[SchemeOut]           = { "#00ff00", "#00ff00" },
};
 
