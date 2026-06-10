#include<stdio.h>

int main(){
	// print triangle of stars
	int n;
	printf("enter n value : ");scanf("%d",&n);

	for(int i=1; i<=n; i++){
		for(int j=1;j<= i ;j++)printf("*");
		printf("\n");
	}
}

/*

take n as input
*
**
***
****
nth line . n stars


*/