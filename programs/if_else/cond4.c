#include<stdio.h>

/* we can write the below program in a more cleaner way . lets see*/

int main(){
	// given the marks print grade A->[100, 90), B-> [90,80), F-> 0<=marks<= 80
	int marks;
	printf("Enter marks : ");scanf("%d",&marks);

	if(marks<0 || marks>100){printf("invalid marks\n");return 0;}// if this fails, exit program
	if(marks>90){printf("A grade\n");return 0;}
	if(marks>80){printf("B grade\n");return 0;}
	printf("F grade\n");
}