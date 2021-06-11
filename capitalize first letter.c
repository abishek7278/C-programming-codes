#include<stdio.h>
#include<stdlib.h>
void capitalize_string();
int main()
{
    char str[100];
    printf("enter the string : ");
    gets(str);
    capitalize_string(str);
    printf("%s",str);
    return 0;
}
void capitalize_string(char *s)
{
    while(*s)
    {
        while (*s && *s == ' ')
            s++;
        *s = toupper(*s);
        s++;
        while (*s && *s != ' ')
            s++;
  }
}
