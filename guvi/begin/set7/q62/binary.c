#include<stdio.h>
#include<conio.h>
void main()
{
int value,count=0;
long n;
scanf("%ld",&n);
while(n!=0)
{
value=n%10;
if((value!=0)&&(value!=1))
{
count++;
break;
}
n=n/10;
}
if(count>0)
{
printf("NO");
}
else
{
printf("YES");
}
getch();
}
