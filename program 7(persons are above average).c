#include<stdio.h>
int main()
{
    float height[20],avg,sum=0.0;
    int n,num=0,i;
    printf("enter the number of persons:");
    scanf("%d",&n);
    printf("\nenter the height(in centimeters):\n");
    for (i=0;i<n;i++)
    {
        scanf("%f",&height[i]);
        sum=sum+height[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(height[i]>avg)
            num++;
    }
    printf("\nnumber of persons above average height is %d\n",num);
    return 0;
}
