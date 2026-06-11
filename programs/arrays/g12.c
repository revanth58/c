#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	// random values

	srand(time(0)); // seed value for the random function

	int z = rand(); //random function gives a random value
	printf("%d\n",z);

	int arr1[15];
	for(int i=0;i<15;i++){
		arr1[i] = rand();
	}

	for(int i=0;i<15;i++){
		printf("%d ",arr1[i]);
	}printf("\n");

	// rand values for range [100,200)
	int arr[15];
	for(int i=0;i<15;i++){
		arr[i] = 100 + (rand())%100;
	}

	for(int i=0;i<15;i++){
		printf("%d ",arr[i]);
	}printf("\n");
}

/*

what if we only want random numbers between 100,200 only
both included

100 + (rand())%100

-500 to +500
-500 + (rand())%1001
*/