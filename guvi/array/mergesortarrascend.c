#include<stdio.h>
void main()
{
int n,m,a[10],b[10],l,i,j,temp;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
l=n+m;
j=0;
for(i=n;i<l;i++)
{
a[i]=b[j];
j++;
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("%d ",a[i]);
}
}
