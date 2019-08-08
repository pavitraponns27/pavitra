#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i=0;
clrscr();
gets(s);
while(s[i]!='\0'&&printf("%c",s[i]))
{
i++;
}
getch();
}
