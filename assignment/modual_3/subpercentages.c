#include<stdio.h>
void main()
{
	int percentage , sum , maths , gujrati , socialscince , hindi , scince;
	printf("enter subjects marks:");
	scanf("%d%d%d%d%d",&maths,&gujrati,&socialscince,&hindi,&scince);
	sum = maths+gujrati+socialscince+hindi+scince;
	printf("sum is :%d+%d+%d+%d+%d=%d",maths,gujrati,socialscince,hindi,scince,sum);
	percentage = sum/5;
	printf("\npercentages is: %d",percentage,sum,5);
		if(percentage > 75)
		{
		printf("\ndistinction");
	}
		else if(percentage > 60&&percentage <= 75){
		printf("\nfirst class");}
		else if(percentage > 50&&percentage <= 60){
		printf("\nsecond class");}
		else if(percentage > 35&&percentage <= 50){
		printf("\npass class");}
		else
		printf("\nfail");
	
	
}
