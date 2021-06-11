#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,cot=0,rem=1;
    scanf("%d",&n);
    char str[n],str1[n];
    scanf("%s",&str);
    scanf("%s",&str1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i]==str1[j] && rem==1)
            {
                cot++;
                str1[j]='i';
                rem++;
            }
        }
        if(i+1!=cot)
        {
            printf("%d",n-cot);
            exit(0);
        }
        rem=1;
    }
    if(i==cot)
        printf("0");
}
