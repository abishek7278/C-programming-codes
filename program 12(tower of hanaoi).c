#include<stdio.h>
void tower(int,char,char,char);
int main()
{
    int num;
    printf("enter the number of the disks : ");
    scanf("%d",&num);
    printf("the sequence of moves in the tower of hanoi");
    towers(num,'A','C','B');
    return 0;
}
void towers(int num,char from_rod,char to_rod,char aux_rod)
{
    if(num==1)
    {
        printf("\nmove disk 1 from rod %c to rod %c",from_rod,to_rod);
        return;
    }
    towers(num-1,from_rod,aux_rod,to_rod);
    printf("\nmove disk %d from %c to rod %c",num,from_rod,to_rod);
    towers(num-1,aux_rod,to_rod,from_rod);
}
