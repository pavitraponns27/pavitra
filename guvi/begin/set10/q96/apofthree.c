#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,l,sum=0;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
l=a+(c-1)*b;
i=a;
while(i<=l)
{
sum=sum+i;
i=i+b;
}
printf("%d",sum);
getch();
}
