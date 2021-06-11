#include<stdio.h>
int fibanocci(int n){
    int n1=0,n2=1,n3=1;
    if(n==0 || n==1)
    {
        return n;
    }
    while(n3<=n)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return n2;
}
int main()
{
    int num;
    scanf("%d",&num);
    while(num>0){
        int rem=fibanocci(num);
        printf("%d",rem);
        num=num-rem;
        if(num!=0)
            printf("+");
    }
}
