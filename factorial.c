#include<stdio.h>
int main()
{
    int n,multi=1,i;
    scanf("%d",&n);
    if(n==0)
        multi=1;
    else
    {
        for(i=1;i<=n;i++)
        {
            multi=multi*i;
        }
    }
    printf("%d",multi);
    return 0;
}
