#include <stdio.h>

int Fibonacci(int number){
	if(number <= 2){
		return 1;
	}
	else{
		return Fibonacci(number - 1) + Fibonacci(number - 2);
	}
}

int main(void){
	int value;

	printf("Fibonacci Calculator \n");
	printf("input the number : ");
	scanf("%d", &value);

	printf("The result is %d \n", Fibonacci(value));
}
