#include<stdio.h>
#include<stdlib.h>
struct node
{
    int pow;
    int coeff;
    struct node *next;
};
struct node *start1=NULL;
struct node *start2=NULL;
struct node *start3=NULL;
struct node *start4=NULL;
struct node *create_poly(struct node*);
struct node *add_poly(struct node*,struct node*,struct node*);
struct node *sub_poly(struct node*,struct node*,struct node*);
struct node *add_node(struct node*,int,int);
void display_poly(struct node*);
int main()
{
    int choice,num;
    do{
        printf("\n***MAIN MENU***");
        printf("\n1.enter the first polynomial");
        printf("\n2.enter the second polynomial");
        printf("\n3.add the two polynomials");
        printf("\n4.display the result");
        printf("\n5.subtract the two polynomials");
        printf("\n6.display the result");
        printf("\n7.EXIT");
        printf("\n\nenter the choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1:start1=create_poly(start1);
        break;
        case 2:start2=create_poly(start2);
        break;
        case 3:start3=add_poly(start1,start2,start3);
        printf("\npolynomial added");
        break;
        case 4:printf("\npolynomial equation-1\n");
        display_poly(start1);
        printf("\npolynomial equation-2\n");
        display_poly(start2);
        printf("\nthe resultant equation \n");
        display_poly(start3);
        break;
        case 5: printf("\n enter 1 to subract polynomial1-polynomial2\nenter 0 to subract polynomial2-polynomial1");
        printf("\nenter the 1 or 0 to subtract : ");
        scanf("%d",&num);
        if(num==1){
                start4=sub_poly(start1,start2,start4);
        }
        else{
            start4=sub_poly(start2,start1,start4);
        }
        printf("\npolynomial subtracted\n");
        break;
        case 6:printf("\npolynomial equation-1\n");
        display_poly(start1);
        printf("\npolynomial equation-2\n");
        display_poly(start2);
        printf("\nthe resultant equation \n");
        display_poly(start4);
        break;
        case 7:exit(0);
        }
    }while(choice<8);
    return 0;
}
struct node *create_poly(struct node *start)
{
    int p,c;
    struct node *ptr,*new_node;
    printf("enter the coefficient: ");
    scanf("%d",&c);
    printf("enter the power: ");
    scanf("%d",&p);
    while(c!=-1){
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->coeff=c;
        new_node->pow=p;
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
        }
        printf("\nenter the coefficient: ");
        scanf("%d",&c);
        if(c==-1)
            break;
        printf("enter the power: ");
        scanf("%d",&p);
    }
    return start;
}
void display_poly(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        printf("%d X%d ",ptr->coeff,ptr->pow);
        ptr=ptr->next;
        printf(" + ");
    }
    printf("%d X%d ",ptr->coeff,ptr->pow);
}
struct node *add_poly(struct node *start1,struct node *start2,struct node *start3)
{
    struct node *ptr1,*ptr2;
    int sum;
    ptr1=start1;
    ptr2=start2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->pow==ptr2->pow)
        {
            sum=ptr1->coeff+ptr2->coeff;
            start3=add_node(start3,sum,ptr1->pow);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->pow > ptr2->pow)
        {
            start3=add_node(start3,ptr1->coeff,ptr1->pow);
            ptr1=ptr1->next;
        }
        else if(ptr1->pow < ptr2->pow)
        {
            start3=add_node(start3,ptr2->coeff,ptr2->pow);
            ptr2=ptr2->next;
        }
    }
    if(ptr2==NULL)
        {
            while(ptr1!=NULL){
                start3=add_node(start3,ptr1->coeff,ptr1->pow);
                ptr1=ptr1->next;
            }
        }
        else if(ptr1==NULL)
        {
            while(ptr2!=NULL){
                start3=add_node(start3,ptr2->coeff,ptr2->pow);
                ptr2=ptr2->next;
            }
        }
    return start3;
}
struct node *sub_poly(struct node *start1,struct node *start2,struct node *start4)
{
    struct node *ptr1,*ptr2;
    int diff;
    ptr1=start1;
    ptr2=start2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->pow==ptr2->pow)
        {
            diff=ptr1->coeff-ptr2->coeff;
            start4=add_node(start4,diff,ptr1->pow);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->pow > ptr2->pow)
        {
            start4=add_node(start4,ptr1->coeff,ptr1->pow);
            ptr1=ptr1->next;
        }
        else if(ptr1->pow < ptr2->pow)
        {
            diff=-(ptr2->coeff);
            start4=add_node(start4,diff,ptr2->pow);
            ptr2=ptr2->next;
        }
    }
    if(ptr2==NULL)
    {
        while(ptr1!=NULL){
            start4=add_node(start4,ptr1->coeff,ptr1->pow);
            ptr1=ptr1->next;
        }
    }
    else if(ptr1==NULL)
    {
        while(ptr2!=NULL){
            start4=add_node(start4,ptr2->coeff,ptr2->pow);
            ptr2=ptr2->next;
        }
    }
    return start4;
}
struct node *add_node(struct node *start,int coeff,int pow)
{
    struct node *ptr,*new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->coeff=coeff;
    new_node->pow=pow;
    new_node->next=NULL;
    if(start==NULL)
        start=new_node;
    else{
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=new_node;
    }
    return start;
}
