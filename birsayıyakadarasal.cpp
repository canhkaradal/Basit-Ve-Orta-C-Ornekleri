#include<stdio.h>
#include<conio.h>

main()
{
	int a,sayac;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&a);
	printf("Girilen Sayiya Kadar Olan Asal Sayilar = ");
	for(int i=2;i<=a;i++) // 2 Den Girilen Say�ya kadar say�lar�n Elde Edildi�i D�ng�
	{
		sayac=0;
		for(int j=2;j<i;j++){ // Asall���n Kontrol Edildi�i D�ng�
		if(i%j==0) // � say�s�n�n Herhangi bir say�ya b�l�nd���n�n kontrol�
		sayac++; // Herhangi bir say�ya b�l�n�yorsa Saya� Art�yor
	}
	if(sayac==0) // E�er Saya� Artmam��sa Yani � say�s� hi�bir say�ya tam b�l�nm�yorsa � Say�s� Yazd�r�l�r
	printf("%d ",i);
	}
	
}
