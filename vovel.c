#include<stdio.h>
main()
{
	char vovel;
	printf("Enter your Vovel : ");
	scanf("%c",&vovel);
	
	switch(vovel)
	{
		case 'a':
			printf("This is a vovel");
			break;
			
		case 'e':
			printf("This is a vovel");
			break;
			
		case 'i':
			printf("This is a vovel");
			break;
			
		case 'o':
			printf("This is a vovel");
			break;
			
		case 'u':
			printf("This is a vowel");
			break;
			
		default:
			printf("Consonant");
	}
	
}
