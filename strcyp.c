#include<stdio.h>
#include<string.h>
main()
{
	char s1[20] = "Hello world!";
	char s2[20];
	
	strcyp(s2,s1);
	printf("%s",s2);
}
