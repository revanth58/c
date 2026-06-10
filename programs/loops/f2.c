#include<stdio.h>

int main(){
	// print 1 to n in reverse

	int n;
	printf("Enter n : ");scanf("%d",&n);

	/*int numb = n;
	while(numb>=1){
		printf("%d ",numb);
		numb = numb-1;
	}
	printf("\n");*/

	//for loop
	for(int i=n ; i>0; i -= 1){ // i-=1 or i-- or --i
		printf("%d ",i);
	}
	printf("\n");
}