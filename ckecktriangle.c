#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter the vlaue of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	if(a=b=c){
		printf("The triangle is Equilateral");
	}
	else if(a==b || b==c || c==a){
		printf("The triangle is Scalene");
	}
	else{
		printf("The triangle is Isosceles");
	}
}
