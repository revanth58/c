#include<stdio.h>

int main(){
	// computing GCD
	//int a=63, b=39;
	
	int a,b;
	printf("enter a value : ");scanf("%d",&a);
	while(a<=0){ // force to take input until user enters a positive value
		printf("invalid input. enter again : ");
		scanf("%d",&a);
	}

	printf("enter b value : ");scanf("%d",&b);
	while(b<=0){
		printf("invalid input. enter again : ");
		scanf("%d",&b);
	}

	// put small number in a and big number in b
	if(a<=b);
	else{
		a = a+b;
		b = a-b;
		a = a-b;
	}
	while(a!=0){ // every iteration change (a,b) to (b%a,a)
	// until at last in (a,b) a will be 0, then b will be your remainder
		b= b%a;
		a = a+b;
		b = a-b;
		a = a-b;
	}
	printf("gcd of a,b is %d\n",b);
}

/*

63,39

39)63(1
   39
   24)39.....

   3 0)3

39,63 --->  63%39, 39 --->  39%24, 24 ----->  0,3

a,b --> b%a, a -->





*/