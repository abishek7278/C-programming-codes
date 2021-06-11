#include<stdio.h>
int convert_to_x_base(int,int);
int main()
{
    float num;
    printf("enter the decimal number :");
    scanf("%f",&num);
    printf("\ndecimal to binary : ");
    convert_to_x_base(num,2);
    printf("\ndecimal to octal : ");
    convert_to_x_base(num,8);
    printf("\ndecimal to hexadecimal : ");
    convert_to_x_base(num,16);
    return 0;
}
int convert_to_x_base(int num,int base)
{
    int rem;
    if(num==0)
        return 0;
    else
    {
        rem=num%base;
        convert_to_x_base(num/base,base);
        if(base==16&&rem>=10)
            printf("%d",rem+55);
        else
            printf("%d",rem);
    }
}
