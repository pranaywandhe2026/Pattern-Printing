#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==3 || i==3)
            printf("* ");
        }
        printf("\n");
    }
}
