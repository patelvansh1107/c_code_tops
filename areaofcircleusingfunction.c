#include<stdio.h>
float area();
main()
{
	float a,r;
	
	printf("Enter the r = ");
	scanf("%f",&r);
	
	a = 3.14 * r * r;
	
	printf("area = %f",a);
}
