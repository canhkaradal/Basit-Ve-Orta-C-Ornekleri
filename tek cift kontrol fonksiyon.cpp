#include<stdio.h>

int bul(int x)
{
	if(x==0)
	printf("Sayi 0'dir\n");
	else if(x%2==0)
	printf("Sayi Çift'tir\n");
	else
	printf("Sayi Tek'dir\n");
	if(x<0)
	return -1;
	else
	return +1;
}

main()
{
	int x;
	printf("Bir Sayi Giriniz=");
	scanf("%d",&x);
	printf("%d",bul(x));
}
