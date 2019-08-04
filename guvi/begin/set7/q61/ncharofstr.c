#include<stdio.h>
#include<conio.h>
void main()
{
char s[40],i;
int num;
printf("enter the string");
gets(s);
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("%c",s[i]);
}
getch();
}

