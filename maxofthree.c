#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	if(a>b){
		printf("maximun number is a");
	}
	else if(a>c){
		printf("maximun number is a");
	}
	else if(b>a){
		printf("maximun number is b");
	}
	else if(b>c){
		printf("maximun number is b");
	}
	else{
		printf("maximun number is c");
	}
}
