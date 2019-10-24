#include<stdio.h>
int a,b=0;
main()
{
	printf("Bir Sayi Giriniz =");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	
	for(int i=a-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	
}
