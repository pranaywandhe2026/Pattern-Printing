#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int a=65;
        for(int k=1;k<=i;k++)
        {
            char x=(char)a;
            printf("%c",x);
            a++;

        }
        printf("\n");
    }
}