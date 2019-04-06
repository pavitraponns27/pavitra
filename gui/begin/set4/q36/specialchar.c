#include<stdio.h>
#include<string.h>
void main()
{
char str[200];
int l,i,digit=0;
printf("Enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
digit=digit+1;
  }
}
printf("%d",digit);
}

    
