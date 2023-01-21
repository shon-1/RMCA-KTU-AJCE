#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node* head=0;
int count=1;
//-------------------------------------------------------------beginning
insertBEGINNING()
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));

    printf("Enter the element : ");
    scanf("%d",&n->data);

    if(head==0)
    {
        head=n;
        n->next=0;
        n->prev=0;
    }
    else
    {
        head->prev=n;
        n->next=head;
        n->prev=0;
        head=n;

    }

}
//-----------------------------------------------------------------insertion at End
insertionEnd()
{
    struct node *temp,*n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element");
    scanf("%d",&n->data);

    if(head==0)
    {
         head=n;
        n->next=0;
        n->prev=0;
    }
    else
    {
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
        n->next=0;

    }

}
//----------------------------------------------at random position
insertRANDOM()
{
    struct node *n,*temp,*temp1;
    int pos,i;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position to add the Element : ");
    scanf("%d",&pos);

    if(pos==1)
    {
        insertBEGINNING();
    }
    else
    {
        temp=head;
        printf("Enter the Element : ");
        scanf("%d",&n->data);

        for(i=2;i<pos;i++)
       {
           temp = temp->next;
       }
                n->prev=temp;
                n->next=temp->next;
                temp->next=n;
                temp->next->prev=n;
            }
}
//----------------------------------------------DELETE AT BEGG
void deleteBEGINN()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    printf("\t\t\t\t--------------- Node Deleted");
}
//----------------------------------------------delete at end
void deleteEND()
{
    struct node* temp;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    if(temp==head)
    {
        deleteBEGINN();
    }
    else
    {
    temp->prev->next=0;
    free(temp);
    printf("\t\t\t\t--------------- Node Deleted");
}
    }

//----------------------------------------------Delete random

void deleteRANDOM()
{
    struct node*temp,*ptr;
    int pos=1;
    printf("Enter the Position");
    scanf("%d",&pos);

    ptr = head;
    while(ptr -> data != pos)
    ptr = ptr -> next;
    if(ptr -> next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if(ptr -> next -> next == NULL)
    {
        ptr ->next = NULL;
    }
    else
    {
        temp = ptr -> next;
        ptr -> next = temp -> next;
        temp -> next -> prev = ptr;
        free(temp);
        printf("\nnode deleted\n");
    }
}


//----------------------------------------------DiSPLAY
display()
{
    struct node*temp;
    temp=head;
     printf("-----------------------\n");
  if(head==0)
  {
      printf("List is Empty");
  }
    else{
        while(temp!=0)
        {

            printf("--%d",temp->data);


            temp=temp->next;
        }
    }
     printf("\n-----------------------");
}

int main()
{
 int choice=1;
 while(choice!=0)
 {
     printf("\n1-Insert at Biginning \n2-Insetion At End \n3-Insertion at Random position\n4-Delete at Beginnning \n5 Delete at End \n6-Delete from a given Position  \n8-Display \n0-Exit");
     printf("\n\nEnter your choice");
     scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        insertBEGINNING();
        break;

    case 2:
        insertionEnd();
         break;
    case 3:
        insertRANDOM();
        break;
    case 4:
        deleteBEGINN();
        break;
    case 5:
        deleteEND();
        break;
    case 6:
        deleteRANDOM();
        break;
    case 8:
        display();
        break;
    case 0:
        exit(0);
    }

}
}
