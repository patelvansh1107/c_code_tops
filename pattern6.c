#include<stdio.h>
main()
{
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			if(row%2==0){
				printf("*");
			}
			else{
				printf("$");
			}
		}
		printf("\n");
	}
}
