#include<stdio.h>
main()
{
	int a=10,b=20;
	int *p,*q;
	
	p=&a;
	q=&b;
	
	printf("value of a=%d\n",a);
	printf("value of a=%d\n",*p);
	printf("value of a=%d\n",&a);
	printf("value of a=%x\n",p);
	printf("value of a=%p\n",p);
}
