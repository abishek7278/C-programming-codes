//C PROGRAM TO IMPLEMENT DEQUEUE
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *left=NULL;
struct node *right=NULL;
void insert_beg();
void delete_beg();
void insert_end();
void delete_end();
void display();
int main()
{
    int num;
    printf("WELCOME TO QUEUE");
    do{
        printf("\n___MAIN MENU___\n");
        printf("1.Insert at beginning\n");
        printf("2.Deletion at beginning\n");
        printf("3.Insert from end\n");
        printf("4.Deletion from end\n");
        printf("5.Dislay\n6.EXIT\n");
        printf("ENTER THE OPTION : ");
        scanf("%d",&num);
        switch(num){
        case 1:insert_beg();
        break;
        case 2:delete_beg();
        break;
        case 3:insert_end();
        break;
        case 4:delete_end();
        break;
        case 5:display();
        break;
        case 6:exit(0);
        }
    }while(num<7);
    return 0;
}
void insert_beg()
{
    struct node *new_node;
    int val;
    printf("\nenter the data : ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=new_node->prev=NULL;
    if(left==NULL)
    {
        left=right=new_node;
    }
    else{
        left->prev=new_node;
        new_node->next=left;
        left=new_node;
    }
    printf("\nELEMENT IS INSERTED AT BEGINNING\n");
}
void insert_end()
{
    struct node *new_node;
    int val;
    printf("\nenter the data : ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=new_node->prev=NULL;
    if(right==NULL)
    {
        right=left=new_node;
    }
    else{
        right->next=new_node;
        new_node->prev=right;
        right=new_node;
    }
    printf("\nELEMENT IS INSERTED AT END\n");
}
void delete_beg()
{
    struct node *ptr;
    if(left==NULL)
        printf("EMPTY queue.");
    else{
        ptr=left;
        left=left->next;
        free(ptr);
    }
}
void delete_end()
{
    struct node *ptr;
    if(right==NULL)
        printf("EMPTY queue.");
    else{
        ptr=right;
        right=right->prev;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=left;
    if(left==NULL && right==NULL)
        printf("NO node exist\n");
    else{
        while(ptr!=right)
        {
            printf("\n%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n%d\t",ptr->data);
        printf("\n");
    }
}
