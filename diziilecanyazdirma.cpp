#include<stdio.h>
main()
{
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<6;j++)
		{
			if(i==0||i==5||j==0)
			printf("1");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<6;j++)
		{
			if(i==0 || i==2 ||j==0||j==5)
			printf("1");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<6;j++)
		{
			if((i==j) ||j==0||j==5)
			printf("1");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}
