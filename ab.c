#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	a = a + b; //30
	b = a - b; //30-20 = 10
	a = a - b;
	
	printf("a = %d",a);
	printf("b = %d",b);
	
}
