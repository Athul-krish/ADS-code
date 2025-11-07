#include<stdio.h>
#include<stdlib.h>
int stk[100];
int top=-1,max=10;

void disp(){
if(top == -1)
{
	printf("\nstack is empty\n\n");
	return;
}
int t=top;
while(t != -1){
	printf("\n%d ",stk[t]);
	t--;
	}
}

void push(int x){
if(top == max-1){
 printf("\nStack overflow\n\n");
 return;
}
top++;
stk[top]=x;
}

void pop(){if(top == -1){
printf("\nStack empty\n\n");
return;
}
else{
printf("\nPopped %d",stk[top]);
top--;
}}

void isFull(){
if(top == max-1){
 printf("\nStack is full\n\n");
}
else{
 printf("\nStack Not Full\n\n");
}
}


void isEmpty(){
if(top == -1)
{
	printf("\nStack empty\n\n");
}
else
{
	printf("\nStack not empty\n\n");
}
}

void peek(){
if(top == -1)
{
	printf("\nStack empty\n\n");
}
else
printf("\nThe topmost element is %d",stk[top]);
}
void main(){
int ch,num;
while(ch!=7){
printf("\tMenu\t\n1)push\n2)pop\n3)display\n4)peek\n5)is Full\n6)is Empty\n7)Exit\nEnter Your Choice:");
scanf("%d",&ch);
switch(ch){
	case 1:
		printf("Enter number to enter:");
		scanf("%d",&num);
		push(num);
		break;
	case 2:
		pop();
		break;
	case 3:
		disp();
		break;
	case 4:
		peek();
		break;
	case 5:
		isFull();
		break;
	case 6:
		isEmpty();
		break;
	case 7:
		exit(0);
		break;
	default:
		printf("Invalid Choice!!\n\n\n");	
	 }
}
}
