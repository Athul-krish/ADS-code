#include<stdio.h>
int stk[100];
int top=-1;
int max=5;


void disp(){
if(top == -1)
{
	printf("stack is empty");
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
 printf("Stack overflow\n");
 return;
}
top++;
stk[top]=x;
}

void isFull(){
if(top == max-1){
 printf("\nStack is full\n");
}
else{
	printf("\nStack not empty\n");
	}
}



void isEmpty(){
if(top == -1)
{
	printf("\nStack empty\n");
}
else
{
	printf("\nStack not empty\n");
}
}

void peek(){
printf("\nThe topmost element is %d\n",stk[top]);
}

void pop(){
if(top == -1){
printf("\nStack empty\n");
return;
}
else{
printf("\nPopped %d",stk[top]);
top--;
}
}

void main(){
push(11);
push(12);
push(24);
push(35);
push(122);
pop();
disp();
peek();
isEmpty();
}

