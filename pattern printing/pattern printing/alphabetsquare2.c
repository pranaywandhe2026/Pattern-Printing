#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   char x=(char)(j+64);
            printf("%c ",(j+64));
        }
        printf("\n");

    }
}