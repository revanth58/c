#include<stdio.h>

int main(){
	// given the marks print grade A->[100, 90), B-> [90,80), F-> 0<=marks<= 80
	int marks;
	printf("Enter marks : ");scanf("%d",&marks);

	if(marks <= 100 && marks >=0){// check if marks lie between [0,100]
		if(marks>90)printf("A grade\n");  // if marks are >90
		else{
			if(marks>80)printf("B grade\n"); //if marks are >80
			else printf("F grade\n"); // if marks <=80
		}
	}else{
		printf("invalid marks\n");
	}
}