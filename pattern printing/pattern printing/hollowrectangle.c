#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n and m");
    scanf("%d",&n);
    int i,j;
    int a=6;
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=a;j++)
        {
           if(i==1 || i==4 || j==1 || j==6 )
           printf("* ");
           else{
            printf("  ");
           }
           
        }
        
        printf("\n");
    }
}