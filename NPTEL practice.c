#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
 char color[10];
 struct node *next;
};
struct node *start = NULL;
void create();
void display();
void insert_beg();
void insert_end();
void insert_middle();
void delete_beg();
void delete_end();
void delete_middle();
int main()
{
 int option;
 do
 {
 printf("\n\n *****MAIN MENU *****");
 printf("\n 1: Create a list of car and it's colors");
 printf("\n 2: Display the list of car and it's colours");
 printf("\n 3: Add a car and it's color at the beginning");
 printf("\n 4: Add a car and it's color at the end");
 printf("\n 5: Add a car and it's color in the middle");
 printf("\n 6: Delete a car and it's color from the beginning");
 printf("\n 7: Delete a car and it's color from the end");
 printf("\n 8: Delete a car and it's color in the middle");
 printf("\n 9: EXIT");
 printf("\n\n Enter your option : ");
 scanf("%d", &option);
 switch(option)
 {
 case 1: create();
 break;
 case 2: display();
 break;
 case 3: insert_beg( );
 break;
 case 4: insert_end( );
 break;
 case 5: insert_middle( );
 break;
 case 6: delete_beg( );
 break;
 case 7: delete_end( );
 break;
 case 8: delete_middle( );
 break;
 case 9: exit(0);
}
}while(option < 9);
 return 0;
}
void create()
{
 struct node *new_node;
 struct node *ptr;
 char str[10];
 int num,count=0;
 printf("\n Enter -1 to end");
 printf("\n Enter the car number and color : ");
 scanf("%d",&num);
 scanf("%s", &str);
 while(num!=-1 || count++ == 15)
 {
 new_node = (struct node*)
malloc(sizeof(struct node));
 strcpy(new_node->color,str);
 new_node -> next = NULL;
 if(start == NULL)
 {
 start = new_node;
 }
 else
 {
 ptr=start;
 while(ptr -> next != NULL){
 ptr=ptr->next;
 ptr -> next = new_node;
 }
 printf("\n Enter the car number and color : ");
 scanf("%d",&num);
 scanf("%s", &str);
 }
}
}
void display()
{
 struct node *ptr,*preptr;
 int count=0,i,j,cot=0;
 ptr = start;
 preptr=start;
 while(ptr != NULL)
 {
 count++;
 ptr = ptr -> next;
 }
 ptr=start;
 for(i=0;i<count;i++)
 {
     cot=0;
     for(j=i;j<count;j++)
     {
         if(strcmp(ptr->next,preptr)==0 &&preptr->color!='i')
         {
             strcpy(ptr->color,'i');
             cot++;
         }
         ptr=ptr->next;
     }
     printf("%s %d",preptr->color,cot);
     preptr=preptr->next;
     ptr=preptr;
 }
}
void insert_beg()
{
 struct node *new_node;
 char val[10];
 printf("\n Enter the color : ");
 scanf("%s", &val);
 new_node = (struct node *) malloc(sizeof(struct node));
 strcpy(new_node->color,val);
 new_node -> next = start;
 start = new_node;
}
void insert_end()
{
 struct node *ptr, *new_node;
 int val;
 printf("\n Enter the color: ");
 scanf("%s", &val);
 new_node = (struct node *) malloc(sizeof(struct node));
 strcpy(new_node->color,val);
 new_node -> next = NULL;
 ptr = start;
 while(ptr -> next != NULL)
 ptr = ptr -> next;
 ptr -> next = new_node;
}
void insert_middle()
{
 struct node *new_node, *ptr, *preptr;
 int num,count=0;
 char val[10];
 printf("\n Enter the color : ");
 scanf("%s", &val);
 printf("\n Enter the value after which the node has to be inserted : ");
 scanf("%d", &num);
 new_node = (struct node *) malloc(sizeof(struct node));
 strcpy(new_node->color,val);
 ptr = start;
 preptr = start;

 while(count++!= num)
 {
 preptr = ptr;
 ptr = ptr -> next;
 }
 preptr -> next = new_node;
 new_node -> next = ptr;
}
void delete_beg()
{
 struct node *ptr;
 ptr = start;
 start = start -> next;
 free(ptr);
}
void delete_end()
{
 struct node *ptr, *preptr;
 ptr = start;
 while(ptr -> next != NULL)
 {
 preptr = ptr;
 ptr = ptr -> next;
 }
 preptr -> next = NULL;
 free(ptr);
}
void delete_middle()
{
 struct node *ptr, *preptr;
 int num,count;
 printf("\n Enter the car number after which the color has to be deleted : ");
 scanf("%d", &num);
 ptr = start;
 preptr = ptr;
 while(count++ != num)
 {
 preptr = ptr;
 ptr = ptr -> next;
 }
 preptr -> next = ptr -> next;
 free(ptr);
}
