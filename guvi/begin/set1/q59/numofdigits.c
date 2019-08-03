#include<stdio.h>
#include<conio.h>
void main()
{
long n;
int r,count=0;
clrscr();
scanf("%lld",&n);
while(n!=0)
{
count=count+1;
n=n/10;

}
printf("%d",count);
getch();
}
