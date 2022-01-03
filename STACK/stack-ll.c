#include<stdio.h>
int choice,num;
struct node{
    int data;
    struct node *link;
}*top,*head,*temp,*dis;


void push(int num)
{
    if(head==NULL)
    {
        head=malloc(sizeof(struct node));
        head->data=num;
        head->link=NULL;

    }
    else
    {
        temp=malloc(sizeof(struct node));
        temp->data=num;
        temp->link=head;
        head=temp;

    }
}

void display()
{
    if(head==NULL)
    {
        printf("EMPTY LIST!!\n");
    }
    else
    {
        printf("The elements in the list are:\n");
        dis=head;
        while(dis!=NULL)
        {
            printf("%d\n",dis->data);
            dis=dis->link;
        }

    }
}
void pop()
{
    if(head==NULL)
    {
        printf("STACK UNDERFLOW!\n");
    }
    else{
        top=head->link;
        printf("the popped element is : %d\n",head->data);
        free(head);
        head=top;
    }
}
int main(){
    printf("--STACK USING LINKED LIST--\n");
    printf("---------------------------\n");
    printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
    head==NULL;
    do{
        printf("Enter your choice:  ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("Enter number to be pushed: ");
                scanf("%d",&num);
                push(num);
                break;
            }
        case 2:
            {
               pop();
                break;

            }
        case 3:
            {
                printf("The  element on top is : %d\n",head->data);
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                printf("--EXITING--\n");
                break;
            }
        default:
            printf("Enter a valid choice!!\n");
        }

    }while(choice!=5);

    return 0;
}
