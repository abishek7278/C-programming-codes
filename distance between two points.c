#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;
    printf("Enter the value of x1: ");
    scanf("%d",&x1);
    printf("\nEnter the value of y1: ");
    scanf("%d",&y1);
    printf("\nEnter the value of x2: ");
    scanf("%d",&x2);
    printf("\nEnter the value of y2: ");
    scanf("%d",&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\nThe distance between (%d,%d) and (%d,%d) is %f",x1,y1,x2,y2,distance);
}
