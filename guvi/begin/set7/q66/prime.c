#include<stdio.h>
#include<conio.h>
void main()
{
int num,flag=0;
int i;
for(i=1;i<=num;i++)
{
if(num%i==0)
{
flag++;
}
}
if(flag==2)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
