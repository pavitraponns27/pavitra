#include<stdio.h>
#include<conio.h>
void main()
{
int n,val[60],i,sum=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&val[i]);
}
for(i=0;i<n;i++)
{
sum=sum+val[i];
}
printf("%d",sum);
getch();
}
