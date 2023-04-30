#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter the value of a : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		printf("This is a character");
	}	
	else if(ch>='0' && ch<='9'){
		printf("this is a digit");
	}
	else{
		printf("This is a special character");
	}
}
