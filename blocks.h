//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"LAX ", "TZ='America/Los_Angeles' date '+%I:%M %p'",		5,		0},
	{"DAB ", "TZ='America/New_York' date '+%I:%M %p'",		5,		0},
	{"FCO ", "TZ='Europe/Rome' date '+%I:%M %p'",		5,		0},
	{"DXB ", "TZ='Asia/Dubai' date '+%I:%M %p'",		5,		0},
	{"TPE ", "TZ='Asia/Taipei' date '+%I:%M %p'",		5,		0},
	{"", "date '+%b %d (%a) %I:%M %p'",					5,		0},
	{"%", "cat /sys/class/power_supply/BAT0/capacity",	5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
