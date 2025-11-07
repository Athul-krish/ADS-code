#include<stdio.h>
#include <stdlib.h>
int count = 0;
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *new, *head = NULL, *l, *t, *sl, *n, *pn;

void create() {
    int x;  
    new = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the value to insert: ");
    scanf("%d", &x);
    new->data = x;
    new->prev=NULL;
    new->next = NULL;
    count++;
}

void ins_beg() {
    create();
    
    if (head == NULL) {
        head = new;
    } else {
        new->next = head;
        head->prev=new;
        head = new;
    }
    
}

void ins_end() {
    create();
    if (head == NULL) {
        head = new;
    } else {
        l = head;
        while (l->next != NULL) {
            l = l->next;
        }
        new->prev=l;
        l->next = new;
        
    }
   
}

void ins_pos() {
     
    int pos;
    printf("\nEnter the position to insert the node: ");
    scanf("%d", &pos);
    if (pos == 1) {
        ins_beg();
    } else if (pos == count + 1) {
        ins_end();
    } else if (pos > count + 1) {
        printf("\nInvalid position!\n");
    } else {
        create();
        l = head;
        for (int i = 0; i < pos - 2; i++) {
            l = l->next;
        }
        new->prev=l;
        new->next = l->next;
        l->next->prev=new;
        l->next = new;
        count++;
    }
}


void del_beg(){
if(head==NULL){
	printf("List is Empty!!");
	}
else if(head->next== NULL){
	t=head;
	head=NULL;
	free(t);
	count--;
}
else{
	t=head;
	head=head->next;
	free(t);
	count--;
	head->prev=NULL;
	}	
}



void del_end()
{
	if(head==NULL)
	{
		printf("List is empty");
	}
	else if(head->next==NULL)
	{
		l=head;
		head=NULL;
		free(l);
		count--;		
	}
	else
	{
		sl=l=head;
		while(l->next!=NULL)
		{
			sl=l;
			l=l->next;
		}
		sl->next=NULL;
		free(l);
		count--;
	}
}


void del_anypos()
{
	int pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos==1)
	{
		del_beg();
	}
	else if(pos==count)
	{
		del_end();
	}
	else if(pos>count)
	{
		printf("Invalid position");
	}
	else
	{
		sl=l=head;
		for(int i=0;i<pos-1;i++)
		{
			sl=l;
			l=l->next;
		}
		sl->next=l->next;
		
		free(l);
		count--;
	}
}

void display() {
    if (head == NULL) {
        printf("\nList is empty!\n");
    } else {
        printf("\nLinked List: ");
        l = head;
        while (l != NULL) {
            printf("%d ", l->data);
            l = l->next;
        }
        printf("\n");
    }
}

void main()
{
	int op;
	while(op!=8)
	{
		printf("\n\tMENU\n-----------------------------\n1)Insert at beg\n2)Insert at end\n3)Insert at any pos\n4)del at beg\n5)del at end\n6)del at any position\n7)Display\n8)Exit\nEnter your choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				ins_beg();
				break;
			case 2:
				ins_end();
				break;
			case 3:
				ins_pos();
				break;
			case 4:
				del_beg();
				break;
			case 5:
				del_end();
				break;
			case 6:
				del_anypos();
				break;
			case 7:
				display();
				break;
			case 8:
				break;
			default:
				printf("Invalid choice");
		}
	}
}	
