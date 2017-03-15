#include <stdio.h>

void reFunc(int value){
	if(value <= 0){
		return ;
	}

	printf("recFunc Call %d \n", value);
	reFunc(value - 1);
}

int main(void){
	reFunc(5);
	return 0;
}
