#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int b=1;
    for(int i=1;i<=n;i++)
    {   
        int a=1;
        for(int j=1;j<=b;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        b++;
       
        printf("\n");
    }
}