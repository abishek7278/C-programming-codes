#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4},sum=0,i;
    for(i=0;i<5;i++)
        sum=sum+a[i];
    printf("%d\n",sum);
}
