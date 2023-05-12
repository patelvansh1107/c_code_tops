#include<stdio.h>
int revers(char str)
{
	if(str<)
	{
		revers(str+1);
		printf("%c",str);
	}
}
main()
{
	char a[] = "Hello vansh";
	revers(a);
}
