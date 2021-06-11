#include<stdio.h>
#define MIN_BAL 500
int main()
{
    FILE *fp;
    int balance,i,count=0;
    printf("content of data file\n");
    fp=fopen("account","w");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&balance);
        putw(balance,fp);
    }
    fclose(fp);
    fp=fopen("account","r");
    while((balance=getw(fp))!=EOF)
    {
        if(balance<MIN_BAL)
            count++;
    }
    fclose(fp);
    printf("number of account holders below the minimum balance = %d",count);
    return 0;
}
