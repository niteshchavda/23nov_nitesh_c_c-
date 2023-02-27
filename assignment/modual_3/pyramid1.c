#include<stdio.h>
//(1)pyramid
int main()
{
	int i,j;
	for (i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*",j);
		}printf("\n");
	}
}
