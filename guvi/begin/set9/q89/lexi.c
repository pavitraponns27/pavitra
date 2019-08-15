#include<stdio.h>
#include<conio.h>
void main()
{
char s[50],temp;
int i,j;
gets(s);
for(i=0;i<strlen(s);i++)
{
for(j=i+1;j<strlen(s);j++)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
for(i=0;i<strlen(s);i++)
{
printf("%c",s[i]);
}
getch();
}


