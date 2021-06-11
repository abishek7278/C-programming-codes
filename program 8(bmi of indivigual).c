#include<stdio.h>
int main()
{
    int i,n;
    float massheight[20][2],bmi[20];
    printf("enter the number of people:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the mass(in KG)and height(in Meters)of the person-%d:",i+1);
        scanf("%f%f",&massheight[i][0],&massheight[i][1]);
    }
    for(i=0;i<n;i++)
    {
        bmi[i]=massheight[i][0]/(massheight[i][1]*massheight[i][1]);
        printf("\nBMI for person-%d:%f",i+1,bmi[i]);
    }
    return 0;
}
