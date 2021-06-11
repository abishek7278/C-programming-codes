#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    while(num>0)
    {
        printf("%d\n",num);
        if(num%2==0)
        {
            num=num/2;
        }
        else if(num==1)
        {
            break;
        }
        else
        {
            num=(3*num)+1;
        }
    }
    return 0;
}
