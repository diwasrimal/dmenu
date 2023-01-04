/* Dracula colorscheme for dmenu */

static const char base[]           = "#1e1e2e";
static const char rosewater[]      = "#f5e0dc";
static const char maroon[]         = "#eba0ac";

static const char *colors[SchemeLast][2] = {
	                        /*   fg     bg     */
	[SchemeNorm]          = { rosewater, base },
	[SchemeSel]           = { maroon, base },
	[SchemeNormHighlight] = { rosewater,   base },
	[SchemeSelHighlight]  = { maroon, "#45454e" },
	[SchemeOut]           = { "#00ff00", "#00ff00" },
};
