#include<stdio.h>
main()
{
	int a[5];
	int i;
	int sum = 0;
	
	for(i=0;i<5;i++){
		printf("Enter the value of %d : ",i+1);
		scanf("%d",&a[i]);
	}	
	
	for(i=0;i<5;i++){
		printf("\n%d",a[i]);
		sum = sum + a[i];
	}
	
	printf("\nsum = %d",sum);
}
