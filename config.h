/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* Colorscheme */
#include "colorschemes/dracula.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const char *prompt     = " ";       /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=9:antialias=true",
	"NotoColorEmoji:size=9:antialias=true"
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
