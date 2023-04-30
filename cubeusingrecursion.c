#include<stdio.h>
int cube(int x)
{
	if(x>1)
	{
		return x*x*x;
	}
}
main()
{
	printf("%d",cube(3));
}
