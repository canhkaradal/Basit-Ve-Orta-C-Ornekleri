#include<stdio.h>
#include<conio.h>

main()
{
	int a,sayac;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&a);
	printf("Girilen Sayiya Kadar Olan Asal Sayilar = ");
	for(int i=2;i<=a;i++) // 2 Den Girilen Sayýya kadar sayýlarýn Elde Edildiði DÖngü
	{
		sayac=0;
		for(int j=2;j<i;j++){ // Asallýðýn Kontrol Edildiði DÖngü
		if(i%j==0) // Ý sayýsýnýn Herhangi bir sayýya bölündüðünün kontrolü
		sayac++; // Herhangi bir sayýya bölünüyorsa Sayaç Artýyor
	}
	if(sayac==0) // Eðer Sayaç Artmamýþsa Yani Ý sayýsý hiçbir sayýya tam bölünmüyorsa Ý Sayýsý Yazdýrýlýr
	printf("%d ",i);
	}
	
}
