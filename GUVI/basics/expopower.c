#include<stdio.h>
void main()
{
int a,b,l=1;
scanf("%d%d",&a,&b);
while(b>0)
{
l=l*a;
b--;
}
printf("%d",l);
}
