#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
main()
{
	srand(time(NULL));
	int a,b,c,d[5];
	a=rand()%200;
	for(int i=0;i<5;i++)
	d[i]=rand()%20;
	
	do{
		b=rand()%50;
		printf("%d Numarali Katilimci 0 Ile 4 Arasinda Bir Rakam Giriniz=",b);
		scanf("%d",&c);
		a-=d[c];
	}while(a>=0);
	printf("Kazanan Kisinin Nosu =%d",b);
	getch();
}

