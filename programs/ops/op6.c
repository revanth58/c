#include<stdio.h>

int main(){
	int x;
	printf("enter x : ");scanf("%d",&x);

	int ld = x%10;
	int l2d = (x/10)%10;
	printf("%d %d\n",l2d,ld);
}