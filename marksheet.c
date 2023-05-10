#include<stdio.h>
main()
{
	int py,ch,bio,math,com;
	
	float total;

	printf("Enter the value of py : ");
	scanf("%d",&py);
	
	printf("Enter the value of ch : ");
	scanf("%d",&ch);
	
	printf("Enter the value of bio : ");
	scanf("%d",&bio);
	
	printf("Enter the value of math : ");
	scanf("%d",&math);
	
	printf("Enter the value of com : ");
	scanf("%d",&com);	
	
	total = (py+ch+bio+math+com)/5;
	
	if(total>=90){
		printf("Grade A");
	}
	else if(total>=80){
		printf("Grade B");
	}
	else if(total>=70){
		printf("Grade C");
	}
	else if(total>=60){
		printf("Grade D");
	}
	else if(total>=40){
		printf("Grade E");
	}
	else{
		printf("Grade F");
	}
}
