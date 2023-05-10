#include<stdio.h>
main()
{
	int x;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("%d",x>3 && x<8);
	printf("\n%d",x>3 || x<8);	
	
}
