#include<stdio.h>
int calc(int,int);
int main()
{
    int m,n,result;
    scanf("%d%d",&m,&n);
    result=calc(m,n);
    printf("%d",result);
}
int calc(int m,int n)
{
    if(n==0||m==0)
        return 0;
    else if (n%2==0 && m%2==0)
        return(n+calc(n/2,m/2));
    else if(n%2==0 && m%2==1)
        return(n+calc(n/2,m/2));
    else if(m%2==0 && n%2==1)
        return (m+calc(n/2,m/2));
    else
        return (n+m-1+calc(n/2,m/2));
}
