#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    
    int b=1; 
    
    for(int i=1;i<=2*n-1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {   
        int c=1;
        for(int j=1;j<=n-i;j++)
        {
            printf("%d",c);
            c++;
        }
        
        for(int k=1;k<=b;k++)
        {
            printf(" ");
        }
        b=b+2; 
        c=c+i;
        for(int z=1;z<=n-i;z++)
        {
            printf("%d",c);
            c++;
        }
        
        printf("\n");
    }
}       