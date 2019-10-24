#include<stdio.h>
#include<conio.h>

int i,j,a[3[4];
main()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++){
		printf("a[%d][%d] sayili elemani giriniz \n",i,j);
		scanf("%d",&a[i][j]);
}
	}
	
	printf("Matris Su Hali Alir \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	getch();
}
