#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[30];
int i,len,flag=0;
printf("enter the checking string");
gets(str);
len=strlen(str);
for(i=0;i<length;i++)
{
if(str[i]!=str[len-i-1])
{
flag=1;
break ;
}
if(flag=1)
{
printf("not");
}
else
{
printf("yes");
}
getch();
}

