#include<stdio.h>

int main(){
	//fibonacci series
	// print nth fibonacci number
	int n;
	printf("enter n : ");scanf("%d",&n);
	if(n<2){
		printf("%dth fibonacci nmber is %d\n", n, n);
		return 0;
	}
	int a=0,b=1;
	for(int i=1;i<=(n-1);i++){
		int c = a;
		a= b;
		b= b+c;
	}
	printf("%dth fibonacci nmber is %d\n", n, b);
}

/*
    a,b
  a,b
0,1,1,2,3,5,8,13,21,34.......
a,b --> b,a+b


join again at 3:40



*/