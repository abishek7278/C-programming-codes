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
    struct node *prev;
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
    printf("\nenter -1 to exit\nenter the data : ");
    scanf("%d",&val);
    while(val!=-1)
    {
         new_node=(struct node*)malloc(sizeof(struct node));
         new_node->data=val;
         new_node->next=NULL;
         new_node->prev=NULL;
         if(start==NULL){
            start=new_node;
         }
         else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->prev=ptr;
         }
         printf("enter the data : ");
         scanf("%d",&val);
    }
}
void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n%d",ptr->data);
}
void insert_beg()
{
    int val;
    struct node *new_node;
    printf("enter the data : ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    new_node->prev=NULL;
    start->prev=new_node;
    start=new_node;
}
void insert_end()
{
    int val;
    struct node *ptr,*new_node;
    printf("enter the data : ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=NULL;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->prev=ptr;
}
void insert_mid()
{
    int val,num;
    struct node *ptr,*new_node1,*preptr,*new_node2;
    printf("enter the data after and before the data must be inserted : ");
    scanf("%d",&num);
    printf("enter the data to be inserted after  : ");
    scanf("%d",&val);
    new_node1=(struct node*)malloc(sizeof(struct node));
    new_node1->data=val;
    printf("enter the data to be inserted before : ");
    scanf("%d",&val);
    new_node2=(struct node*)malloc(sizeof(struct node));
    new_node2->data=val;
    ptr=start;
    preptr=ptr;
    while(ptr->data!=num){
        preptr=ptr;
        ptr=ptr->next;
    }
    new_node1->next=ptr->next;
    new_node1->prev=ptr;
    ptr->next->prev=new_node1;
    ptr->next=new_node1;
    new_node2->next=preptr->next;
    new_node2->prev=preptr;
    preptr->next->prev=new_node2;
    preptr->next=new_node2;
}
void delete_beg()
{
    struct node *ptr;
    ptr=start;
    start=start->next;
    ptr->next->prev=start;
    free(ptr);
}
void delete_end()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
}
void delete_mid()
{
    struct node *ptr,*preptr,*postptr;
    int val;
    printf("enter the data whose before and after to be deleted : ");
    scanf("%d",&val);
    ptr=start;
    preptr=ptr;
    postptr=preptr;
    while(ptr->data!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    postptr=ptr->next;
    ptr->next=postptr->next;
    postptr->next->prev=ptr;
    ptr->prev=preptr->prev;
    preptr->prev->next=ptr;
    free(postptr);
    free(preptr);
}
