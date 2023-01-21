#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};
struct node *head = 0;

//------------------------------------------------------intial linked list
void createList()
{
	if (head == 0) {
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
    if (n != 0) {
			int a;
			struct node* newnode;
			struct node* temp;
			newnode =(struct node *) malloc(sizeof(struct node));
			head = temp = newnode;
			printf("\nEnter number to be inserted : ");
			scanf("%d", &head->data);


			for (int i = 1; i < n; i++) {
				newnode =(struct node *)malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to"
					" be inserted : ");
				scanf("%d", &newnode->data);
				temp = temp->link;
				temp->link=0;
			}
		}
		printf("\nlist is created\n");
	}
	else
		printf("\nThe list is already created\n");
}

// ---------------------------------------------------------------print the llst
void print()
{
	struct node* ptr;

	if (head == 0)
		printf("\nList is empty\n");

	else
    {
		ptr=head;
		while (ptr != 0)
            {
                printf("Data = %d\n",ptr->data);
                ptr = ptr->link;
            }
    }
}
//--------------------------------------------------------------------------insetion at biggning
void insertAtFront()
{
	struct node* node1;

	node1 =(struct node *) malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &node1->data);

	node1->link = head;
	head = node1;
}

//-------------------------------------------------------------------------------end insert
void insertAtEnd()
{
	struct node *temp, *start, *ptr;
	temp = malloc(sizeof(struct node));


	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &temp->data);
	temp->link = 0;

	start = head;
	while (start->link != 0) {
		start = start->link;
    }
    start->link=temp;

}
//------------------------------------------------------------------inserton in middle
void insertAtmiddle()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	printf("\nEnter position ");
	scanf("%d", &pos);

	printf("\nEnter position and data :");
	scanf("%d", &newnode->data);
	newnode->link = 0;

	temp = head;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
//----------------------------------------------------------delete the first element
void deleteFirst()
{
	struct node* temp;
	if (head == 0)
		printf("\nList is empty\n");
	else {
		temp = head;
		head = head->link;
		free(temp);
	}
}

//-------------------------------------------------------------delete at end
void deleteATend()
{
    struct node*temp,*ptr;
    temp=head;
    while(temp->link!=0)
    {
        ptr=temp;
        temp=temp->link;
    }
    ptr->link=0;
    free(temp);
}

//-------------------------------------------------------------deletion at middle
void deleteATmiddle()
{

}

int main()
{
	int choice;
	while (1) {

        printf("\n\t0 To create the linked list\n");
		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");

		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

        switch (choice) {

             case 0:
                createList();
                break;
            case 1:
                print();
                break;
            case 2:
               insertAtFront();
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                insertAtmiddle();
                break;
            case 5:
                deleteFirst();
                break;
            case 6:
                 deleteATend();
                 break;
            case 8:
			  exit(1);
			  break;
		default:
			printf("Incorrect Choice\n");
		}
    }

}
