#include<stdio.h>
#include<math.h>

int main(){
	// given principal, rate of interest and time = 2*n in years
	//total amount after 2n years where first n years simple interest is applied
	// 2nd n years compound interest is applied

	int p,t,r;
	printf("enter principal : ");scanf("%d",&p);
	printf("enter ROI : ");scanf("%d",&r);
	printf("enter time in years : ");scanf("%d",&t);

	double amount = (p + p*r*((double)t/200))* pow((1+(double)r/100),t/2);
	printf("final amount : %lf\n",amount);
}