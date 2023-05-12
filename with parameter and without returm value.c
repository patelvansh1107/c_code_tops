#include<stdio.h>
void sum(int,int);
void main()
{
	int a,b,result;
	printf("\nWe are going to calculate the sum of two number : ");
	printf("\nEnter two number : ");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	printf("\n The sum of two number is %d",a+b);
}
