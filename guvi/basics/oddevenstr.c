#include<stdio.h>
void main()
{
char s[20],i;
scanf("%s",s);
i=0;
while(s[i]!='\0')
{
printf("%c",s[i]);
i=i+2;
}
printf(" ");
i=1;
while(s[i]!='\0')
{
printf("%c",s[i]);
i=i+2;
}
}
