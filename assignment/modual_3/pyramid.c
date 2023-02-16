#include<stdio.h>
int main()
{
	int i , j , rows ;
	
	printf("enter the number of rows: \n");
	scanf("%d",&rows);
	int space = rows + 1;
    for(i = rows; i>=1; i--)
    {
    	for(j = 1; j<= space ;j++)
		{
    		printf(" ");
		}
		space++;
		for(j = 1; j<= i; j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	return 0;
}
