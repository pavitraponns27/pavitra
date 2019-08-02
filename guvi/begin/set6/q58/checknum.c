#include<stdio.h>
#include<conio.h>
void main()
{
int s,k,n,count=0,i;
int num[45];
clrscr();
printf("s");
scanf("%d",&s);
printf("enter k");
scanf("%d",&k);
for(i=0;i<=3;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<=3;i++)
{
if(num[i]==k)
{
count+=1;
break;
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

