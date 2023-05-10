#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a%5==0 && a%11==0){
		printf("Number is divisble");
	}
	else {
		printf("Number is not divisble");
	}
}
