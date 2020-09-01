// vim: set foldmethod=marker:

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCode Nerd Font:style=Regular:size=10"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

// gruvbox colors

static const char col_foreground[] = "#ebdbb2";
static const char col_background[] = "#1d2021";

static const char col_color7[] = "#a89984";
static const char col_color8[] = "#928374";

static const char *colors[SchemeLast][2] = {
	/* [name]    = { fg            , bg              } */
	[SchemeNorm] = { col_foreground,  col_background },
	[SchemeSel]  = { col_background, col_color7     },
	[SchemeOut]  = { col_background, col_color8      },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static int fuzzy = 1;
static const unsigned int border_width = 2;
