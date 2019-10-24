#include<stdio.h>
#include<string.h>
#include<conio.h>

char a[100];
main(){
gets(a);
for(int i=strlen(a)-1;i>=0;i--)
printf("%c",a[i]);
}
