#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=1;
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d ",x);
            x=x+1;
        }
        a++;
        printf("\n");
    }
}