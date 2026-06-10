#include<stdio.h>

int main(){
	// program to print 1 to 10
	//using while loop

	/*int number = 1;
	while(number <= 10){
		printf("%d ",number);
		number = number+1;
	}
	printf("\n");*/


	// print 1 to n, where n is taken as input
	int n;
	printf("enter n : ");scanf("%d",&n);
	// using while loop
	int number = 1;
	while(number <= n){
		printf("%d ",number);
		number = number+1;
	}
	printf("\n");

	printf("using for loop....\n");
	for(int i=1; i<=n ; i++){
		printf("%d ",i);
	}
	printf("\n");
}