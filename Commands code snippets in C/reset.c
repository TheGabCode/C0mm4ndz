#include <unistd.h>
#include <stdio.h>
void clearScreen() //we can also use this procedure instead for clearing screen
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);

}

void main(){
	
	printf("\e[1;1H\e[2J"); //or for one liner we use this :D
	//refs: http://stackoverflow.com/questions/2347770/how-do-you-clear-console-screen-in-c





}