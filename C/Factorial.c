#include <stdio.h>

int Factorial(int number){
	if(number <= 0){
		return 1;
	}

	else{
		return number * Factorial(number - 1);
	}
}

int main(void){
	int number;
	printf("Factorial Calculator \n");
	printf("input the number : ");
	scanf("%d", &number);

	printf("the result is %d \n", Factorial(number));

	return 0;
}
