#include<stdio.h>
float internal(int);
struct student
{
    int id_no;
    char name[20];
    int sub[5];
    float int_sub[5];
}s[10];
int main()
{
    int n,i,j;
    printf("enter the number of student : ");
    scanf("%d",&n);
    printf("\nstudent data \n\n ");
    for(i=0;i<n;i++)
    {
        printf("enter the student id_no: ");
        scanf("%d",&s[i].id_no);
        printf("enter the name of the student: ");
        scanf("%s",s[i].name);
        printf("enter the marks: ");
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].sub[j]);
            s[i].int_sub[j]=internal(s[i].sub[j]);
        }
    }
    printf("\nstudent information\n");
    for(i=0;i<n;i++)
    {
        printf("\n\nstudent id number= %d\n",s[i].id_no);
        printf("student name = %s\n",s[i].name);
        printf("student marks = %d %d %d %d %d\n",s[i].sub[0],s[i].sub[1],s[i].sub[2],s[i].sub[3],s[i].sub[4]);
        printf("student internal mark = %.2f  %.2f  %.2f  %.2f  %.2f",s[i].int_sub[0],s[i].int_sub[1],s[i].int_sub[2],s[i].int_sub[3],s[i].int_sub[4]);
    }return 0;
}
float internal(int mark)
{
    return (mark/5.0);
}
