#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50],i,j,flag=0,l;
gets(s);
l=strlen(s);
for(i=0;i<l-2;i++)
{
for(j=i+1;j<=l-1;j++)
{
if(s[i]==s[j])
{
flag=flag+1;
}
}
}
if(flag>=1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
