//C PROGRAM TO IMPLEMENT QUEUE
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *rear=NULL;
struct node *fron=NULL;
void insert_node();
void delete_node();
void display();
int main()
{
    int num;
    printf("WELCOME TO QUEUE");
    do{
        printf("\n___MAIN MENU___\n");
        printf("1.Insertion of a node\n");
        printf("2.Deletion of a node\n");
        printf("3.Dislay\n4.EXIT\n");
        printf("ENTER THE OPTION : ");
        scanf("%d",&num);
        switch(num){
        case 1:insert_node();
        break;
        case 2:delete_node();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        }
    }while(num<5);
    return 0;
}
void insert_node()
{
    struct node *new_node;
    int val;
    printf("\nenter the data : ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=val;
    if(fron==NULL)
        rear=fron=new_node;
    else{
        rear->next=new_node;
        rear=new_node;
    }
    printf("\nELEMENT IS INSERTED\n");
}
void delete_node()
{
    struct node *ptr;
    if(fron==NULL)
        printf("NO node exist to delete.");
    else{
        ptr=fron;
        fron=fron->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=fron;
    if(fron==NULL)
        printf("NO node exist\n");
    else{
        while(ptr!=rear->next)
        {
            printf("\n%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
