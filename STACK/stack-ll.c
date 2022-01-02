#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*top,*head,*temp,*peek;

void create(){
    head==NULL;
}
void push(int num){
    if(head==NULL){
        head=malloc(sizeof(struct node));
        head->data=num;
        head->link=NULL;

    }
    else{
        temp=malloc(sizeof(struct node));
        temp->data=num;
        temp->link=head;
        head=temp;

    }

}

void displayList(){
    if(head==NULL){
        printf("The stack is empty!!");
    }
    else{
            peek=head;
printf("\nThe elements present in the stack are: \n");
while(peek!=NULL){
printf("%d\n",peek->data);
peek=peek->link;
}
    }

}
void pop(){


}

int main(){
    int ch,no;
    printf("--STACK OPERATIONS USING LINKED LIST--\n");
    printf("______________________________________\n");
    printf("Enter your choice: \n");
    printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
    create();
    while(1)
    {
        printf("CHOICE : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                printf("Enter the number to be pushed: ");
                scanf("%d",&no);
                push(no);
            }
            break;

        case 2:
                {
                    pop();
                }
                break;
        case 3:
            {
                printf("The last element is: %d\n",head->data);
            }
            break;
        case 4:
            {
                displayList();
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Enter a valid choice!!");
        }
    }

    return 0;

}
