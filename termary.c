#include<stdio.h>
main()
{
	int age;
	printf("Eneter the age : ");
	scanf("%d",&age);
	
	(age>18) ? printf("You can get license") : printf("You cannot get license");
}
