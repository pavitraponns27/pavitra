#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,j,temp;
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
j=a[0];
for(i=0;i<n;i++)
{
if(a[i]==j)
{
}
else
{
printf("%d",j);
break;
}
j++;
}
getch();
}
