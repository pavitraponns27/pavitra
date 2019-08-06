#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,sum;
clrscr();
scanf("%d",&m);
scanf("%d",&n);
sum=m+n;
if(sum%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
