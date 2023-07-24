#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int x=n;
    int b=1;
    for(int i=1;i<=2*n+1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=x;j++)
        {
            printf("%d",a);
            a++;
        }
        
        for(int k=1;k<=b;k++)
        {
            printf(" ");
            a++;
        }
        b=b+2;
        for(int z=1;z<=x;z++)
        {
            printf("%d",a);
            a++;
        }
        x--;
        printf("\n");
    }
}       