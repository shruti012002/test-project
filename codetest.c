#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*temp;
void fn_Create(int,int);
void fn_Display();
void fn_Create(int choose,int data)
{
    struct node *newnode;
    while(choose)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Node not created");
    }
    else{
        printf("enter data :");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=0;
    }
    printf("A node created");
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("\nDo you want to create another node?\n");
    scanf("%d",&choose);
    }
}
void fn_Display()
{
    temp=head;
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else{
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int choose=1,choice,data,user=1;
    do
    {
    printf("1.Insert\n2.Create\n");
    printf("enter choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            fn_Create(choose,data);
            break;
       case 2:
            fn_Display();
            break;
        /*default :
            printf("Invalid choice");*/
    }
    }while(choice!=0);
   return 0;
}