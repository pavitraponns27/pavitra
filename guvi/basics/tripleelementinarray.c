#include<stdio.h>
void main()
{
int n,a[45],i,j,temp=0,count;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count==2)
{
temp++;
}
}
printf("%d",temp);
}

