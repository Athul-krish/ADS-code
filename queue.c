#include <stdio.h>
#include <stdlib.h>

int Queue[5],i,rear=-1,front=-1,size=5,N;



void Enqueue(){
     if (rear==(size-1)){
        printf("Queue is Full \n");
     }   
     else{
         printf("Enter the element to be inserted :");
         scanf("%d",&N);
         Queue[rear+1]=N;
         printf("%d is inserted to the Queue. \n", N);
         rear++;
         if (front = -1){
            front=0;
         }
     }
}

void display(){
     if(front==-1 || front > rear){
        printf("Queue is empty! \n");
     }
     else{
         printf("The queue elements are : \n");
         for(i=front;i<=rear;i++){
             printf("%d \n",Queue[i]);
         }
     }
}

void dequeue(){
     if(front==-1){
            printf("Queue is empty! \n");
     }
     else{
         printf("Removed %d \n",Queue[front]);
         if (front==rear){
            front=rear=-1;
         }
         else{
             front++;
         }
     }  
}




void main(){

int ch;
while (1){
       printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \nEnter your choice :");
       scanf("%d",&ch);
       switch(ch){
             case 1:Enqueue();
                    break;
             case 2:dequeue();
                    break;
             case 3:display();
                    break;
             case 4:exit(0);
                    break;
             default:printf("Invalid choice!");
                     break;
      }

    }
   }
