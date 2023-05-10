#include<stdio.h>
int factorial()
{
	int n,i,fact=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	return fact;
}
main()
{
	int ans;
	ans = factorial();
	printf("\n factorial = %d",ans);
}
