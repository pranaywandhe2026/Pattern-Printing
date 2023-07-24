#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int b=1;
    for(int i=1;i<=n;i++)
    {   
        int a=65;
        for(int j=1;j<=b;j++)
        {   
            char x=(char)a;
            printf("%c ",x);
            a++;
        }
        b++;
        printf("\n");
    }
}