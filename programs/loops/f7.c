#include<stdio.h>

int main(){
	// print diamond of stars
	int n;
	printf("enter n value : ");scanf("%d",&n);

	for(int i=1 ; i<= n; i++){
		for(int j=1; j<= 2*(n-i); j++){printf(" ");}
		for(int j=0;j<(4*(i-1) +1); j++)printf("*");
		printf("\n");
	}
	for(int i= n-1; i>=1; i--){
		for(int j=1; j<= 2*(n-i); j++)printf(" ");
		for(int j=0;j<(4*(i-1) +1); j++)printf("*");
		printf("\n");
	}
}
/*
take n(4) as input

      *
    *****
  *********
*************
  *********
    *****
      *
nth line . n stars


*/