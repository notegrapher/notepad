#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, *pi;
	float f, *pf;

	pi = (int*)malloc(sizeof(int));
	pf = (float*)malloc(sizeof(float));

	*pi = 1024;
	*pf = 1.14;

	printf("pi = %d \n", *pi);
	printf("pif = %f \n", *pf);

	free(pi);
	free(pf);
}
