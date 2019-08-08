#include<stdio.h>
#include<conio.h>
void main()
{
int num;
scanf("%d",&num);
while(num>0)
{
if(num%10==0)
{
printf("%d",num) ;
break;
}
num++;
}
getch();
}
