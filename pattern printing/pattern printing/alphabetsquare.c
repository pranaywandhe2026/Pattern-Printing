#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {   
        int a=65;
        for(int j=1;j<=n;j++)
        {   char x=(char)a;
            printf("%c ",x);
            a++;
        }
       
        printf("\n");
    }
}