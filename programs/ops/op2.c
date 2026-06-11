#include<stdio.h>
#include<math.h>

int main(){
	// principal , rate of interest given and target amount given.
	// calculate how long to wait before amount reaches/surpasses target amount
	int p, r;
	printf("enter principal : ");scanf("%d",&p);
	printf("enter ROI : ");scanf("%d",&r);

	int t;
	printf("enter target amount : ");scanf("%d",&t);

	// because we need p(1+r/100)^time > totalamount(t). 
	// apply log on both sides and seperate time. you will get below expression 
	double time = log10(((double)t)/p)/log10(1+((double)r)/100);
	printf("no. of years to wait : %lf\n",ceil(time));
}