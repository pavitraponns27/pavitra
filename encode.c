#include<stdio.h>
#include<conio.h>
void main()
{
char c[10],i,m;
gets(c);
for(i=0;c[i]!='\0';i++)
{
m=c[i];
printf("%c",m+3);
}
getch();
}
