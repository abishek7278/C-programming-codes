#include<stdio.h>
#include<math.h>
int prime(int);
int percube(int);
int main()
{
    int num[50],weigh[50],n,i;
    printf("\n enter the number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element%d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        weigh[i]=0;
        if(percube(num[i]))
            weigh[i]=weigh[i]+5;
        if(num[i]%4==0&&num[i]%6==0)
            weigh[i]=weigh[i]+4;
        if(prime(num[i]))
            weigh[i]=weigh[i]+3;
    }
    printf("the weight of each numbers :");
    for(i=0;i<n;i++)
        printf("<%d,%d>",num[i],weigh[i]);
    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int percube(int num)
{
    int curoot;
    curoot=round(pow(num,1.0/3.0));
    if(curoot*curoot*curoot==num)
    {
        return 1;
    }
    else
        return 0;
}
