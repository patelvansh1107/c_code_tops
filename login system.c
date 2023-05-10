#include<stdio.h>
void login(char email[],char password[]);
main()
{
	char e[20],p[20];
	printf("Enter your email address : ");
	gets(e);
	printf("Enter your password : ");
	gets(p);
	login(e,p);
}
void login(char email[],char password[])
{
	printf("\n Email : %s",email);
	printf("\n Password : %s",password);
}
