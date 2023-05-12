#include<stdio.h>
int sum(int,int);
void main()
{
	int a,b,result;
	printf("\nWe are going to calculate the sum of two number : ");
	printf("\nEnter two number : ");
	scanf("%d%d",&a,&b);
	result = sum(a,b);
	printf("%d",result);
}

int sum(int a,int b)
{
	return a+b;
}
