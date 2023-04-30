#include<stdio.h>
main()
{
	int marks[5] = {45,22,5,3,66};
	int i,sum = 0;
	
	for(i=0;i<5;i++){
		sum = sum + marks[i];
	}	
	printf("Sum = %d",sum);
}
