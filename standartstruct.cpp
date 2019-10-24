#include<stdio.h>
#include<string.h>
struct ogrenci{
	char adi[20];
	char soyad[20];
	int no,vize,final;
};


main()
{

	struct ogrenci o;
		printf("Ogrenci Adini Giriniz=");
		gets(o.adi);
		printf("Ogrenci Soyadini Giriniz=");
		gets(o.soyad);
		printf("Ogrenci No Giriniz=");
		scanf("%d",&o.no);
		printf("Ogrenci Vize Sonucunu Giriniz=");
		scanf("%d",&o.vize);
		printf("Ogrenci Final Sonucunu Giriniz=");
		scanf("%d",&o.final);
		
		float ort;
		ort=(o.vize*0.4)+(o.final*0.6);
		printf("%s ",o.adi);
		printf("%s ",o.soyad);
		printf("%d ",o.no);
		printf("%d ",o.vize);
		printf("%d ",o.final);
		printf("%f \n" ,ort);

}
