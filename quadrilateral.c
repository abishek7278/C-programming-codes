#include<stdio.h>
int distance(int,int,int,int);
int main()
{
    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int s1,s2,s3,s4,d1,d2;
    s1=distance(x1,x2,y1,y2);
    s2=distance(x2,x3,y2,y3);
    s3=distance(x3,x4,y3,y4);
    s4=distance(x4,x1,y4,y1);
    d1=distance(x1,x3,y1,y3);
    d2=distance(x2,x4,y2,y4);
    if(d1==d2)
    {
        if(s1==s2&&s3==s4)
            printf("\n2");
        else
            printf("\n3");
    }
    else if(d1!=d2&&s1==s2&&s3==s4)
        printf("\n1");
    else
        printf("\n0");
    return 0;
}
int distance(int a1,int a2,int b1,int b2)
{
    return (((a1-a2)*(a1-a2))+((b1-b2)*(b1-b2)));
}
