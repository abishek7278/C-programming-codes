#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_beg();
void insert_end();
void insert_mid();
void delete_beg();
void delete_end();
void delete_mid();
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
    int choice;
    printf(".....Main menu.....\n");
    printf("1.create a circularly linked list\n");
    printf("2.display the list\n");
    printf("3.insert at the beginning\n");
    printf("4.insert at the end\n");
    printf("5.insert at the middle\n");
    printf("6.delete at the beginning\n");
    printf("7.delete at the end\n");
    printf("8.delete at the middle\n");
    do{
        printf("\nenter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: insert_beg();
            break;
            case 4: insert_end();
            break;
            case 5: insert_mid();
            break;
            case 6: delete_beg();
            break;
            case 7: delete_end();
            break;
            case 8: delete_mid();
            break;
            default: exit(0);
        }
    }while(choice<9);
    return 0;
}
void create(){
int val;
struct node *ptr,*new_node;
printf("\nenter -1 to exit\nenter the data: ");
scanf("%d",&val);
while(val!=-1){
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=NULL;
    if(start==NULL)
    {
        start=new_node;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
    printf("enter the data: ");
    scanf("%d",&val);
}
ptr=ptr->next;
ptr->next=start;
}
void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=start){
        printf("\n%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n%d",ptr->data);
}
void insert_beg()
{
    struct node *new_node,*ptr;
    int num;
    ptr=start;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data:");
    scanf("%d",&num);
    new_node->data=num;
    while(ptr->next!=start){
        ptr=ptr->next;
    }
    new_node->next=start;
    ptr->next=new_node;
    start=new_node;
}
void insert_end()
{
    int num;
    printf("\nenter the data :");
    scanf("%d",&num);
    struct node *new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    while(ptr->next!=start){
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->next=start;
}
void insert_mid()
{
    int num,val;
    struct node *new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the number after which the data must be inserted:");
    scanf("%d",&val);
    printf("\nenter the data :");
    scanf("%d",&num);
    new_node->data=num;
    ptr=start;
    while(ptr->data!=val){
            ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
}
void delete_beg()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=start->next;
    free(start);
    start=ptr->next;
}
void delete_end()
{
    struct node *ptr,*preptr;
    ptr=start;
    preptr=start;
    while(ptr->next!=start)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
void delete_mid()
{
    struct node *preptr,*ptr;
    int num;
    printf("\nenter the data to be deleted :");
    scanf("%d",&num);
    ptr=start;
    preptr=start;
    while(ptr->data!=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
