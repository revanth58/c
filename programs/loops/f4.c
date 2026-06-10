#include<stdio.h>

int main(){
	// print all digits of n
	int n = 35332473;

	int z=0;
	while(n != 0){
		printf("%d ",n%10);
		z = z+ n%10;
		n= n/10;
	}
	printf("\nsum of digits is %d\n",z);

}

/*
n = 35332473

n%10
(n/10)%10
(n/100)%10
*/