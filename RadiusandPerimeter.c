#include<stdio.h>
#define pi 3.1415
int main()
{
	int r;
	float a,p;
	printf("Enter the radius of the circle\n");
	scanf("%d",&r);
	a=pi*r*r;
	p=2*pi*r;
	printf("Area is = %f and perimeter is %f",a,p);

	return 0;
}