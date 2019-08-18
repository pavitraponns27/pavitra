#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,valid=0;
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c)
{
if((b+c)>a)
{
if((a+b)>b)
{
valid=1;
}
}
}
if(valid==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
