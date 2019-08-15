#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i;
int s[48];
clrscr();
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(i==k)
{
printf("%d",s[i-1]);
break;
}
}
getch();
}
