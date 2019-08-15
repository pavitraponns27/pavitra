#include<stdio.h>
#include<conio.h>
void main()
{
char s[50],i,l;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(i%2==0||i==0)
{
printf("%c",s[i]);
}
}
printf("\n");
for(i=0;i<l;i++)
{
if(i%2!=0)
{
printf("%c",s[i]);
}
}
getch();
}
