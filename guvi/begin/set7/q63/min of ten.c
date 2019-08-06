#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,small;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
small=arr[0];
for(i=0;i<10;i++)
{
if(arr[i]<small)
{
small=arr[i];
}
}
printf("%d",small);
getch();
}
