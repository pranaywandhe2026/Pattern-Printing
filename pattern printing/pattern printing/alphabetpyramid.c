#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=1;
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int x=65;
        for(int k=1;k<=a;k++)
        {   
            char ch=(char)x;
            printf("%c",ch);
            x++;
        }
        a=a+2;
        printf("\n");
    }
}