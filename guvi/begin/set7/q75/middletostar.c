#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
int l,m,i;
gets(s);
l=strlen(s);
m=l/2;
if(l%2==0)
{
for(i=0;i<l;i++)
{
if(i==m)
{
s[m-1]='*';
s[m]='*';
}
}
}
else
{
s[m]='*';
}
for(i=0;i<=l;i++)
{
printf("%c",s[i]);
}
getch();
}
