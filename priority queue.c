//C PROGRAM TO IMPLEMENT PRIORITY QUEUE
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *rear=NULL;
struct node *fron=NULL;
void push();
void pop();
void peek();
void display();
int main()
{
    int num;
    printf("WELCOME TO QUEUE");
    do{
        printf("\n___MAIN MENU___\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PEEK\n4.DISPLAY\n5.EXIT\n");
        printf("ENTER THE OPTION : ");
        scanf("%d",&num);
        switch(num){
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        case 5:exit(0);
        }
    }while(num<6);
    return 0;
}
void push()
{
    struct node *new_node;
    int val,prior;
    printf("\nENTER THE DATA : ");
    scanf("%d",&val);
    printf("\nENTER THE PRIORITY : ");
    scanf("%d",&prior);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->priority=prior;
    if(fron==NULL||prior<fron->priority){
        new_node->next=fron;
        fron=new_node;
    }
    else{
        rear=fron;
        while(rear->next!=NULL && rear->next->priority<=prior )
            rear=rear->next;
        new_node->next=rear->next;
        rear->next=new_node;
        rear=new_node;
    }
    printf("\nELEMENT IS PUSHED\n");
}
void pop()
{
    struct node *ptr;
    if(fron==NULL)
        printf("NO node exist to delete.\n");
    else{
        ptr=fron;
        printf("DELETED DATA IS %d\n",ptr->data);
        fron=fron->next;
        free(ptr);
    }
}
void peek()
{
    if(fron==NULL)
        printf("NO node exist to delete.\n");
    else
        printf("THE TOPMOST ELEMENT IS %d\n",fron->data);
}
void display()
{
    struct node *ptr;
    ptr=fron;
    if(fron==NULL)
        printf("NO node exist\n");
    else{
        while(ptr!=NULL)
        {
            printf("\n%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
