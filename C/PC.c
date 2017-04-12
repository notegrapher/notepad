#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

#define SIZE 5

int nums[SIZE] = {0, 1, 2, 3, 4};

int main(void){
	int i;
	pid_t pid;

	pid = fork();

	// Child Process
	if(pid == 0){
		for(i=0; i<SIZE; i++){
			nums[i] *= -i;
			printf("CHILD : %d ", nums[i]);
		}
	}

	else if(pid > 0){
		wait(NULL); // Parent process wait until child process finish
		for(i=0; i<SIZE; i++){
			printf("PARENT: %d ", nums[i]);
		}
	}

	return 0;
}
