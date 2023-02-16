#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr = fopen("D:/c programs/fcm.txt","a");
	int i , j , n ,ans ;
	printf("enter your 2 no:");
	scanf("%d%d",&i,&j);
	printf("1. for addition\n2. for substrection\n3. for multiply\n4. for division\n");
	scanf("%d",&n);
	switch (n)
	{
		case 1 : ans = i+j;
		printf("addition is:%d",ans);
		fprintf(fptr,"%d+%d=%d\n",i,j,ans);
		break;
		case 2 : ans = i-j;
		printf("substrection is:%d",ans);
		fprintf(fptr,"%d-%d=%d\n",i,j,ans);
		break;
		case 3 : ans = i*j;
		printf("multiplay is:%d",ans);
		fprintf(fptr,"%d*%d=%d\n",i,j,ans);
		break;
		case 4 : ans = i/j;
		printf("division is:%d",ans);
		fprintf(fptr,"%d/%d=%d\n",i,j,ans);
		break;
		default :
			printf(" invelid no");
			break;
	}
	fclose(fptr);
	
	
	
}
