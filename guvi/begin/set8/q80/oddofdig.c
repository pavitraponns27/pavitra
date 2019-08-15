#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;
int r;
scanf("%d",&num);
while(num>0)
{
r=num%10;
sum=sum*10+r;
num=num/10;
}
while(sum>0)
{
r=sum%10;
if(r%2!=0)
{
printf("%d",r);
}
sum=sum/10;
}
getch();
}



