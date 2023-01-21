#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;

//-------------------------------------------------------------
void enqueue()
{


	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	printf("Enter the Element");
	scanf("%d",&n->data);

	if((r==NULL)&&(f==NULL))
	{
		f = r = n;
		r->next = f;
	}
	else
	{
		r->next = n;
		r = n;
		n->next = f;
	}
}
//-------------------------------------------------------------
void dequeue()
{
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r){
		f = r = NULL;
		free(t);
	}
	else{
		f = f->next;
		r->next = f;
		free(t);
	}


}
//-------------------------------------------------------
void print(){
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("--%d",t->data);
			t = t->next;
		}while(t != f);
	}
}
//-------------------------------------------------------------
void search()
{
    struct node * temp;
    int s , count=1;
    printf("Enter the Number to search :");
    scanf("%d",&s);
    temp=f;
    while(temp->next!=0)
    {
        if(temp->data==s){
                printf("%d present at position %d",s,count);
                break;
        }

        temp=temp->next;
        count++;

    }


}
//-------------------------------------------------------------
int main()
{
	int opt=1,n,i,data;
	printf("Enter Your Choice:-");

	while(opt!=0){

		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit");
		scanf("%d",&opt);

		switch(opt){
			case 1:
                enqueue();
				break;
			case 2:
				print();
				break;
			case 3:
				 dequeue();
				break;
            case 4:
				 search();
				break;
			case 0:
				break;
			default:
				printf("\nInvalid Choice");

		}
	};
return 0;
}
