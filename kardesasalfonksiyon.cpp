#include<stdio.h>

bool asalmi(int x)
{
	int sayac=0;
	for(int j=2;j<x;j++){ 
	if(x%j==0) 
	sayac++;
	}
	if(sayac==0)
	return true;
	else
	return false;
}

main()
{
	for(int i=2;i<100;i++)
	{
		if(asalmi(i) && asalmi(i+2))
		printf("%d ve %d sayilari kardes asaldir\n",i,i+2);
	}
	
}
