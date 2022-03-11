//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"", "checkupdates | wc -l | awk '{$1 > 0 ? res = \" \" $1 : res = \"\"; print res}'", 30, 1},
	{"", "curl -s https://wttr.in/Berlin?format=%t | awk '{ print \" \" $1 }'", 30, 6},
	{" ", "cpu_usage", 30, 2},
	{" ", "free | grep Mem | awk '{ printf(\"%.2f%\", $3/$2 * 100.0) }'", 30, 3},
	{"", "battery", 30, 4},
	{"", "date '+%a %d %b %I:%M %P'",					5,		5},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
