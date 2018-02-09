%{
#include "dice.h"

int __numargs = 20;
char *_args = 20;
int _argcount = 0;
%}

WORD	[a-zA-Z0-9\/\.-]+
SPECIAL [()><|&;*]
ROLL    ([0-9]*)d[4|6|8|10|12|20]([x[0-9]*]?)([+[0-9]*]?)
%%
	_argcount = 0; _args[0] = NULL;

{WORD}|{SPECIAL} {
	if(_argcount < _numargs-1){
		_args[_argcount++] = (char *)strdup(yytext);
		_args[_argcount] = NULL;
	}
}

\n  return (int)_args;

[ \t]+

.

%%

char **lexgetline() { return (char **) yylex((); }
