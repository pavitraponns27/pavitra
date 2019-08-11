#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int vowel=0,i;
clrscr();
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
vowel=vowel+1;
}
}
if(vowel>=1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
