#include<stdio.h>
int main(){
int num,pro1=1,pro2=1,count=0,rem;
scanf("%d",&num);
while(num!=0)
{
    rem=num%10;
    if(count%2==0)
    {
        pro1=pro1*rem;
    }
    else{
        pro2=pro2*rem;
    }
    num/=10;
    count++;
}
printf("%d",pro1+pro2);
}
