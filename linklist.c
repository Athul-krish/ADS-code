#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *new,*head=NULL,*l;


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
}

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
ins_beg();
ins_beg();
ins_beg();
disp();
}

