#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,temp,max=0;
    char str[10];
    scanf("%d",&num);
    scanf("%s",str);
    max=strlen(str);
    for(i=1;i<num;i++)
    {
        temp=strlen(str);
        if(temp>max)
            max=strlen(str);
        scanf("%s",str);
    }
    printf("%d",max);
    return 0;
}
