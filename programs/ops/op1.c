#include<stdio.h>
#include<math.h>

int main(){
	//input : angle in degrees, output all trig functions
	double angle;
	printf("enter angle : ");scanf("%lf",&angle);

	double s = sin(angle*(2*3.1416)/360);
	double c = cos(angle*(2*3.1416)/360);
	double t = tan(angle*(2*3.1416)/360);

	printf("sin x = %lf\n",s);
	printf("cos x = %lf\n",c);
	printf("tan x = %lf\n",t);
	
	printf("sin-1 x = %lf\n",(360/(2*3.1416))*asin(s));
	printf("coz-1 x = %lf\n",(360/(2*3.1416))*acos(c));
	printf("tan-1 x = %lf\n",(360/(2*3.1416))*atan(t));
}