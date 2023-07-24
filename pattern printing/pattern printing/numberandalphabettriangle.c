#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int x=1;
    int y=2;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {    
            int a=1;
            for(int j=1;j<=x;j++)
            {
                printf("%d ",a);
                a++;

            }
            x=x+2;
            printf("\n");
        }
        else
        {   
           
            int c=65;
            for(int k=1;k<=y;k++)
            {   
                char ch=(char)c;
                printf("%c ",ch);
                c++;
            }
            y=y+2;
            printf("\n");
        }
    }
}