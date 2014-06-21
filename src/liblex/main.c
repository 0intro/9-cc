#include	<lib9.h>
#include	<ctype.h>
#include	<bio.h>

int	yylex(void);

void
main(int argc, char *argv[])
{
	USED(argc);
	yylex();
	exits(0);
}
