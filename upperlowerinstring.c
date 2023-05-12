#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter the name : ");
	gets(name);
	
	printf("\n name = %s",name);
	
	printf("\n lower case : %s",strlwr(name));
	printf("\n upper case : %s",strupr(name));
}
