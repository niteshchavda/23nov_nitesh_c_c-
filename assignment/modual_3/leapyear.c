#include<stdio.h>
void main()
{
	int y;
	printf("enter your :");
	scanf("%d",&y);
	if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
	printf("year is leap year");
	else
	printf("not leap year");
}
