#include<stdio.h>
#include<conio.h>
int main()
{
int num,n,m,i;
scanf("%d",&n);
scanf("%d",&m);
num=n*m;
for(i=0;i<=num;i++)
{
if(num==i*i)
{
printf("yes");
getch();
return 0;
}
}
printf("no");
getch();
return 0;
}

