#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	printf("%d",x==y);
	printf("\n%d",x>y);
	printf("\n%d",x<y);
	printf("\n%d",x>=y);
	printf("\n%d",x<=y);
	printf("\n%d",x!=y);	
}
