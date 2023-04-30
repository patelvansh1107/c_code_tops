#include<stdio.h>
main()
{
	char wd;
	printf("Enter the value : ");
	scanf("%c",&wd);
	
	if(wd>='A'&& wd<='Z'){
		printf("The alphabet is upercase");
	}
	else if(wd>='a' && wd<='z')
	{
		printf("The alphabet is lowercase");
	}
	else
	{
		printf("This is not an alphabet");	
	}
}
