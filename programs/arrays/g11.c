#include<stdio.h>


int main(){
	// take input from user and fill the array
	int arr[10];
	printf("dear user, enter 10 values to be stored in array : ");
	int z;
	for(int i=0; i<10; i++){
		scanf("%d",&z);
		arr[i] = z;
	}

	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}printf("\n");
}