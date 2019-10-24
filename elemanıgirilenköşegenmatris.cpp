#include<stdio.h>
#include<conio.h>

int a[30][30],i,j,n;

main()
{
	do{
		printf("N i giriniz=");
		scanf("%d",&n);
	}while(n>30);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			a[i][j]=1;
			else
			a[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",a[i][j]);
		printf("\n");
	}
	getch();
}


