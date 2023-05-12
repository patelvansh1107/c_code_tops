#include<stdio.h>
struct person
{
	int age;
	char name[20];
	float salary;
};
main()
{
	struct person p;
//	scanf("%d %s %f",&p.age,&p.name,&p.salary);
//	printf("Age = %d\nname = %s\nsalary = %f",p.age,p.name,p.salary);
	
	printf("Enter the age = ");
	scanf("%d",&p.age);
	printf("Age = %d",p.age);
	
	printf("\nEnter the name = ");
	scanf("%s",&p.name);
	printf("Name = %s",p.name);
	
	printf("\nEnter the Salary = ");
	scanf("%f",&p.salary);
	printf("Salary = %f",p.salary);
	
}
