#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int words,i=0;
    printf("enter the string : ");
    gets(str);
    words=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            words++;
        i++;
    }
    printf("total number of words : %d\n",words);
    i=1;
    printf("%c",toupper(str[0]));
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            str[i+1]=toupper(str[i+1]);
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
