#include<stdio.h>
int main()
{
	int i , j , rows ;
	int space = rows - 1;
	printf("enter the number of rows: \n");
	scanf("%d",&rows);
    for(i = 1; i<= rows; i++)
    {
    	for(j = 1; j<= space ;j++)
		{
    		printf("  ");
		}
		space--;
		for(j = 1; j<= i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
