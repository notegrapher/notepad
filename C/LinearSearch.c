#include <stdio.h>

int LinearSearch(int arr[], int length, int target){
	int i;
	for(i=0; i<length; i++){
		if(arr[i] == target){
			return i;
		}
	} 

	return 0;
}

int main(void){
	int arr[] = {3, 1, 4, 5, 6};

	int index;

	index = LinearSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(index == 0){
		printf("Search Fail \n");
	}

	else{
		printf("Target Index : %d \n", index);
	}

	return 0;
}
