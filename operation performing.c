#include<stdio.h>
#include<string.h>
int main()
{
    //l is total no of numbers
    //s is total no of operators
    //i is the number iteration
    //j is the operator iteration
    char str[30];
    scanf("%s",str);
    int length=strlen(str);
    int l=0,s=0,i=1,j=1,first=str[1]-48;;
    while(str[i]!='\"')
    {
        if(str[i]>=48 && str[i]<=57)
        {
            l++;
            if(s==1){
                printf("wrong input");
            }
        }
        else
        {
            s++;
        }
        i++;
    }
    if(l!=s+1)
    {
        printf("wrong input");
    }
    i=1;
    l++;
    while(str[i]!="\"")
    {
        for(i=2;i<l;i++)
        {
                int second=str[i]-48;
                switch(str[l+j])
                {
                case '*':
                    first=first*second;
                    break;
                case '%':
                    first=first%second;
                    break;
                case '/':
                    first=first/second;
                    break;
                case '+':
                    first=first+second;
                    break;
                case '-':
                    first=first-second;
                    break;
                }
                j++;
        }
    }
    printf("%d",first);
}
