#include<stdio.h>
int main(){
int num1,num2,temp;
scanf("%d",&num1);
scanf("%d",&num2);
while(num1!=num2)
{
    if(num1==2)
        printf("2 ");
    else
    {
        temp=2;
        while(temp!=num1)
        {
            if(num1%temp==0)
            {
                break;
            }
            temp++;
        }
        if(temp==num1)
            printf("%d ",num1);
    }
    num1++;
}
}
