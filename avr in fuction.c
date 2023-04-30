#include<stdio.h>
int avr(int,int,int,int,int);
int main()
{
	int a,b,c,d,e,avg;
	printf("Enter five values : ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg = avr(a,b,c,d,e) / 5;
	printf("%d",avg);
}
int avr(int a,int b,int c,int d,int e){
	return (a+b+c+d+e) / 5;
}
