#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
main()
{
	srand(time(NULL));
	int a,b,c,d;
	a=rand()%200;
	do{
		b=rand()%50;
		d=rand()%20;
		printf("%d Numarali Katilimci Adina Degerden Eksiltilecek Rakam =%d \n ",b,d);
		a-=d;
		getch();
	}while(a>=0);
	printf("Kazanan Kisinin Nosu =%d",b);
	getch();
}

