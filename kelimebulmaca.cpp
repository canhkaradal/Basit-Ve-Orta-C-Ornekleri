#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
main()
{
char isim[6]={'a','d','a','n','a',};
char sifre[5];
int a,b[5],c,d,e,f;

e=1;

tekrar:
c=0;
for(d=0;d<6;d++)
{
b[d]=0;
}

printf("Lutfen tahmini giriniz : ");
scanf("%s",sifre);

for(a=0;a<5;a++)
{
if(sifre[a]==isim[a])
{
b[a]=1;
c++;
}
}

for(a=0;a<5;a++)
{
if(b[a]==1)
{
sifre[a]=sifre[a]-32;
}
}
srand(time(NULL));
f=rand()%60;
if(c==5)
{
printf("\nTahmin dogru = %s . %d. denemede buldunuz.\n",sifre,e);
getch();
}
else
{
printf("\nTahmin yanlis = %s . Bu %d. deneme. Siradaki Tahmin Edecegin Numarasi= %d.\n",sifre,e,f);
e++;
goto tekrar;
}
} 
