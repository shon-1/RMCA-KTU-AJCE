#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;
struct node *head;

void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc (sizeof(struct node));


    printf("\nEnter value :\n");
    scanf("%d",&item);
    ptr -> data = item;
    if(top == NULL)
        {
            top = head = ptr;
            top -> next = NULL;
            printf("\n=======================================");
            printf("\nElement inserted \n");
            printf("========================================\n");
        }
    else
        {
            head=ptr;
            ptr->next = top;
            top = ptr;
            printf("\n========================================");
            printf("\nElement inserted \n");
            printf("========================================\n");
        }
    }

void delete ()
{
    struct node *ptr;
    if(head == 0)
    {
        printf("\n================================================");
        printf("\n------UNDERFLOW !!!!!\n");
        printf("================================================\n");
        return;
    }
    else
    {
        ptr = top;
        top = top -> next;
        free(ptr);
        head=top;
        printf("\n==================================================");
        printf("\nElement Deleted\n");
        printf("==================================================\n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(head==0)
    {
        printf("\n================================================");
        printf("\nEmpty queue\n");
        printf("================================================\n");
    }
    else
    {   printf("\n================================================");
        printf("\nprinting values .....\n");
        printf("\n Stack elements are : ---->\n");
        while(ptr != NULL)
        {
            printf("\n\t\t\t\t%d",ptr -> data);
            ptr = ptr -> next;
        }
        printf("\n================================================\n");
    }
}




void main ()
{
    int choice;
    while(choice != 4)
    {


        printf("\n1.push \n2.pop \n3.Display \n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",& choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete ();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\n========================================");
            printf("\nNot a valid Choice !!!!\n");
            printf("========================================\n");
        }
    }
}

