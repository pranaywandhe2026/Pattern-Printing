#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=0;
    int b=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf(" ");
        }
        a++;
        for(int k=1;k<=b;k++)
        {
            printf("*");
        }
        b--;
        printf("\n");
    }
}