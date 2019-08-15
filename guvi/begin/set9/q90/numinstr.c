#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10];
int i;
clrscr();
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='9')
{
printf("%c",s[i]);
}
}
getch();
}
