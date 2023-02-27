#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr=fopen("D:/practice/read data from file.txt","r");
	if(fptr==NULL)
	{
		printf("invalid file name..... ");
		exit(1);
	}
	int num;
	fscanf(fptr,"%d",&num);
	printf("n = %d",num);
}
