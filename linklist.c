#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *new,*head=NULL,*l,*t;
int count=0;

//creating a new node
void create(){
int x;
new=(struct node *)malloc(sizeof(struct node));
printf("Enter the value to be inserted:");
scanf("%d",&x);
new->data=x;
new->next=NULL;
printf("Data inserted\n");
}


void ins_beg(){
create();
if(head==NULL)
{
	head=new;
}
else{
	new->next=head;
	head=new;
}	
	count++;
}


void ins_end(){
create();
if(head==NULL)
{
	head=new;
}
else{
	l=head;
	while(l->next!=NULL)
	{
		l=l->next;
		}
	l->next=new;
	count++;
}
}


void ins_pos(){
int i,pos;
printf("Enter position to be inserted:");
scanf("%d",&pos);
if(pos==1){
	ins_beg();
	}
else if(pos==count+1)
	{
	ins_end();
	}
else if(pos>count+1)
	{
	printf("Invalid postion");
	}
else
{
	create();
	l=head;
for(i=0;i<pos-2;i++)
	{
		l=l->next;
		}
	new->next=l->next;
	l->next=new;
	count++;
}	
}
	
	
	
void del_beg(){
if(head==NULL){
	printf("List empty");
	}
else{
	t=head;
	head=head->next;
	free(t);
	count--;
	}
	printf("\nDeleted first element\n");
}
void del_end(){}
void del_pos(){}
	
void disp(){
if(head==NULL){
	printf("List is empty");
	}
else{
  	l=head;
  while(l!=NULL){
	printf("%d ",l->data);	
	l=l->next;
	}
}
}

void main(){
ins_end();
ins_end();
ins_end();
ins_end();
ins_end();
disp();



del_beg();
disp();
}
