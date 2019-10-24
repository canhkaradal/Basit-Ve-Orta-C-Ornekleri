#include<stdio.h>

main()
{
	FILE* d;									// dosya yol tanýmý
	d=fopen("E:\\dosya.txt","a+");				// yol belirtilmesi
	
	for(int i=0;i<10;i++)
	fprintf(d,"Merhaba ");
	fclose(d);
}
