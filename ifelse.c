#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a>18){
		printf("you can vote");
	}	
	else{
		printf("you cannot vote");
	}
}
