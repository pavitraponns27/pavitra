#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char s[54];
int i,alpha,num;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(isalpha(s[i]))
{
alpha=1;
}
if(isdigit(s[i]))
{
num=1;
}
}
if(alpha==1 && num==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
