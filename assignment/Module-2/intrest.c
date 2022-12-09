#include<stdio.h>
#include<math.h>
void main()
{
	int a,p,n;
	float c,r;
	printf("enter the value of no:");
	scanf("%d%f%d",&p,&r,&n);
	c=p*pow(1+r/100,n);
	printf("the value of intrest%d\n",a = p*r*n/100);
	
	printf("the value of compound intresht%f\n",c);
}
