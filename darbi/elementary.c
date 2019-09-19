#include <unistd.h>
#include <stdio.h>
int i;
int treshold = 1;
void reset () {
  printf("\033[0m");
}
int main(){
	//printf("okc");
	for(i = 1; i<10; i++){
		sleep(treshold);
		printf("\033[1;31m");
		printf("this is number: %d\n", i);
	}
	reset;
}
