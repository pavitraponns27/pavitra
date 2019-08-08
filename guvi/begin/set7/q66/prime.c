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
printf("it is a prime number");
}
else
{
printf("it is not a prime number");
}
getch();
}
