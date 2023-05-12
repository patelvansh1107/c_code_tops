#include<stdio.h>
int num(int);
main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
int num(int n)
{
	return n;
}

