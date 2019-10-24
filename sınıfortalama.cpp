#include<stdio.h>
#include<conio.h>

float sinif[5];
float top=0,ok=0;

main()
{
	for(int i=0;i<5;i++)
	{
		printf("%d. ogrencinin",i+1);
		printf("\n NOTU:");
		scanf("%f",&sinif[i]);
		top+=sinif[i];

	}
	ok=top/5;
	printf("SINIF NOT ORTALAMASI = %f",ok);
}
