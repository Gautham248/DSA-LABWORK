//16th NOVEMBER 2021
//AUTHOR:_GAUTHAM_KRISHNA_
//QUEUE_IMPLEMENTATION
//AIM: TO IMPLEMENT STACK OPERATIONS USING C PROGRAMMING
//---------------------QUEUE OPERATIONS--------------

#include<stdio.h>
#include<stdlib.h>
#define n 100000
int q[n],x,ch,rear=0,front=0,item,i;
void enqueue(void);
void dequeue(void);
void display(void);

int main(){
	printf("Enter the number of elements in the Queue\n");
	scanf("%d",&x);
	printf("----QUEUE OPERATIONS----\n");
	printf("1.EnQueue\n2.DeQueue\n3.Display\n4.Exit\n");
	fflush(stdin);
	do{
	printf("\nChoose the operation\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
		enqueue();break;
		}
		case 2:
		{
		dequeue();break;
		}
		case 3:
		{
		display();break;
			}
			case 4:
			{
			printf("Exiting\n");
			break;
			}
		default :
		printf("\nEnter a valid choice\n");
	
	}
	}while(ch!=4);
	return 0;
	}
	
	void enqueue(){
	if(rear==(x)){printf("\nQueue is full\n");}
	else{
		printf("Enter the element to be entered: ");scanf("%d",&item);
		q[rear]=item;
		rear++;
	
	}
	}
	void dequeue(){
	if(rear==front){printf("Queue is empty\n");}
	else{
		item=q[front];
		front++;
		printf("The deleted item is: %d",item);
	}
	}
	
	void display(){
	printf("The elements of the Queue are\n");
		
            if(front==rear)
                printf("\n Queue is Empty\n");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",q[i]);
                    printf("\n");
                }
        }
}
