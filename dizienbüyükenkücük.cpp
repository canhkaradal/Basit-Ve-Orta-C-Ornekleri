#include<stdio.h>
#include<conio.h>

int a[10],toplam=0,max,min,i;	

main()
{
	
	for(i=0;i<10;i++)
	{
		printf("%d'nci ogrencinin notunu giriniz \n",i+1);
		scanf("%d",&a[i]);
		toplam+=a[i];
	}

	max=a[0];
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	printf("En Yuksek =%d      En Dusuk = %d",max,min);
	//for(int i=0;i<10;i++)
	//printf("a[%d]=%d \n",i+1,a[i]);
}
