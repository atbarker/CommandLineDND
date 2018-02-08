
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

#include "character.h"
#include "dice.h"

extern char **lexgetline();

int main(){
	int i;
	char **args;
	while(1){
		args = lexgetline();
		for(i=0; args[i] != NULL; i++){

		}
	}
	return 0;
}
