#define CMDLENGTH 60
#define DELIMITER " "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("cupdates",    1800, 17),
	BLOCK("curl -s https://wttr.in/Berlin?format=%t | awk '{print \" \" $1}'",   0,    18),
	BLOCK("cpu_usage",    30, 2),
	BLOCK("free | grep Mem | awk '{ printf(\" %.2f%\", $3/$2 * 100.0) }'",  10,   20),
	BLOCK("battery", 30,    4),
	BLOCK("date '+%a %d %b %I:%M %P' ",     5,    26),
};
