#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,r,count=0,i;
clrscr();
scanf("%d",&n);
scanf("%d",&l);
scanf("%d",&r);
for(i=l;i<=r;i++)
{
if(i==n)
{
count+=1;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

