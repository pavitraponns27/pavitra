#include<stdio.h>
#include<conio.h>
void main()
{
int s,k,n,count=0,i;
int num[45];
clrscr();
printf("enter the value of s");
scanf("%d",&s);
printf("enter k");
scanf("%d",&k);
printf("enter n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<=n;i++)
{
if(num[i]==k)
{
count+=1;
}
}
printf("%d",count);
getch();
}

