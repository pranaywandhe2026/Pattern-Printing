#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=n/2;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf(" ");
        }
        for(int k=1; k<=b;k++)
        {
            printf("*");
        }
        if(i<(n/2+1)){
            a--;
            b=b+2;
        }
        else{
            a++;
            b=b-2;
        }
        printf("\n");
    }
}