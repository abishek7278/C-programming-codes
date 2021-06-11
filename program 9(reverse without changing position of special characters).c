#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[10],t;
    int first,last;
    printf("enter the string :");
    scanf("%s",str);
    first=0;
    last=strlen(str)-1;
    while(last>first)
    {
        if(!isalpha(str[first]))
            first++;
        else if(!isalpha(str[last]))
            last--;
        else
        {
            t=str[last];
            str[last]=str[first];
            str[first]=t;
            first++;
            last--;
        }
    }
    printf("the reverse of the sting is %s",str);
    return 0;
}
