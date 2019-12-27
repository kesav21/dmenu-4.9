/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraMono Nerd Font:style=Regular:size=12"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
	/*					fg			bg			*/
	// gruvbox colors
	[SchemeNorm] =	{	"#a89984",	"#282828" },
	[SchemeSel] =	{	"#282828",	"#a89984" },
	// this is a multiple selection thing
	// it's the color of already selected items
	[SchemeOut] =	{	"#282828",	"#928374" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static int fuzzy = 1;
static const unsigned int border_width = 5;

