#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,arr[30],m;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
m=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]!=m)
{
printf("%d",i);
break;
}
m=m+1;
}
getch();
}


