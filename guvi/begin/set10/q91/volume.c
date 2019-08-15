#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,w,vol,area;
clrscr();
scanf("%d",&l);
scanf("%d",&b);
scanf("%d",&w);
vol=l*b*w;
area=2*((l*w)+(b*w)+(l*b));
printf("%d\n",area);
printf("%d",vol);
getch();
}
