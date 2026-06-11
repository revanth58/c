#include<stdio.h>
#include<math.h>


int main(){
	// implement f(x) which is a piece wise function with domain as (-infinity,6]
	//		  {x^2   if x<2}
	// f(x) = {6     if x=2}
	//		  {10-x  if 2<x<=6}
	//

	int x;
	printf("enter x : ");scanf("%d",&x);

	if(x<2){
		printf("f(x) is %d\n",(int)pow(x,2));
	}
	else{
		if(x == 2)printf("f(x) is 6\n");
		else{
			if(x<=6){
				printf("f(x) is %d\n",10-x);
			}
			else{
				printf("x value is not in domain\n");
			}
		}
	}
}
// break till 9:40pm