#include<stdio.h>
void main()
{
    int r,n;
    scanf("%d",&n);
    r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    while(r>0)
    {
        switch(r%10)
        {
            case 0:
            printf("zero ");
            break;
            case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
            
            
            
            
        }
        r=r/10;
    }
}
