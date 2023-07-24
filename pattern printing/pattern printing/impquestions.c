#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=n;
    int b=1;
    for(int i=1;i<=2*n+1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("*");
        }
        
        for(int k=1;k<=b;k++)
        {
            printf(" ");
        }
        b=b+2;
        for(int z=1;z<=a;z++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
}       