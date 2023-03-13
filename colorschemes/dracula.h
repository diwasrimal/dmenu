/* Dracula colorscheme for dmenu */

static const char darkbg[]	= "#1f1f2e";
static const char white[]	= "#f8f8f2";
static const char pink[]	= "#FF79C6";
static const char cyan[]	= "#8be9fd";
static const char yellow[]	= "#f1fa8c";
static const char purple[]	= "#bd93f9";

static const char *colors[SchemeLast][2] = {
	                        /*   fg     bg     */
	[SchemeNorm]          = { white,	darkbg },
	[SchemeSel]           = { cyan,		darkbg },
	[SchemeNormHighlight] = { white,	darkbg },
	[SchemeSelHighlight]  = { cyan,		"#45454e" },
	[SchemeOut]           = { "#00ff00","#00ff00" },
};
