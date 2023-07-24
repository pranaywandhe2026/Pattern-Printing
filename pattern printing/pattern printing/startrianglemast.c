#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if((i+j)>=5) printf("* ");
    //         else printf("  ");
    //     }
    //     printf("\n");
    // }
    int a=3;
   for( int i=1;i<=n;i++)
   {
    for(int j=1;j<=a;j++)
    {
        printf(" ");
    }
    a--;
    
    for(int k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
   }
}