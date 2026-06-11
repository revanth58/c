#include<stdio.h>

//arrays - need to mention type and size

int main(){
	int arr[23];

	printf("%d %d %d %d\n",arr[0],arr[10],arr[13],arr[22]);
	// how to print all elements in an array?
	for(int i=0 ; i<23 ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	arr[0]=0;
	arr[1]=1;
	arr[2]=2;

	//set all elements to -100
	for(int i=0; i<23; i++){
		arr[i] = -100;
	}

	for(int i=0 ; i<23 ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}