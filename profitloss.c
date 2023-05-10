#include<stdio.h>
main()
{
	float profit,loss,sp,cp;
	
	printf("Enter the value of sp : ");
	scanf("%f",&sp);
	printf("Enter the value of cp : ");
	scanf("%f",&cp);
	
	if(sp>cp){
		profit = sp - cp;
		printf("The profit is =  %f",profit);
	}
	else if(cp>sp){
		loss = cp - sp;
		printf("The loss is =  %f",loss);
	}
	else{
		printf("NO profit no loss");
	}
}
