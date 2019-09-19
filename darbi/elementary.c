#include <unistd.h>
#include <stdio.h>
int i;
int treshold = 1;
int precentage = 101;
void reset () {
  printf("\033[0m");
}
int main(){
	printf("NASA HACKING STARTED");
	for(i = 1; i<precentage; i++){
		sleep(treshold);
		printf("\033[1;31m");
		printf("Hacked: %d %%", i);
		printf("\n");
	}
	printf("\x1b[32m");
	printf("NASA has been hacked succesfull! \n");
	reset;
	printf("\033[0m");

}
