#include<stdio.h>
main()
{
	char wd;
	printf("Enter the value of a : ");
	scanf("%c",&wd);
	
	if(wd>='a' && wd<='z' || wd>='A' && wd<='z'){
		printf("This is alphabet");
	}
	else{
		printf("This is not alphabet");
	}
}
