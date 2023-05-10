#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a>0){
		printf("Number is positive");
	}
	else if(a<0){
		printf("Number is nagetive");
	}
	else{
		printf("Number is zero");
	}
}
