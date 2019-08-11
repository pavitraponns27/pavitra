#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,d;
clrscr();
scanf("%d",&n);
scanf("%d",&m);
d=n-m;
if(d%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
