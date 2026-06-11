#include<stdio.h>

int main(){
	// write a program to find the intersection point of 2 straight lines
	float m1,c1;
	float m2,c2;
	printf("enter m,c of line 1 : ");scanf("%f%f",&m1,&c1);
	printf("enter m,c of line 2 : ");scanf("%f%f",&m2,&c2);

	if(m1 == m2){
		if(c1 == c2){
			printf("both lines are same\n");
			return 0;
		}
		else {
			printf("parallel non intersecting lines\n");
			return 0;
		}
	}

	float x = (c2-c1)/(m1-m2);
	float y = (m1*c2 - m2*c1)/(m1-m2);

	printf("intersection point is (%f,%f)\n",x,y);


}