#include<stdio.h>
void sorting(int*,int);
int main()
{
    int i,a[10],n;
    printf("enter total no of elements : ");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array elements before sorting\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    sorting(a,n);
    printf("array elements after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
void sorting(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
}
