#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*stnode;
void create(int n){
    int num,i;
    struct node *fnNode,*tmp;
    stnode=malloc(sizeof(struct node));
    if(stnode==NULL)
    {
        printf("Memory cant be allocated");
    }
    else
    {

        printf("Enter the data of NODE 1 : ");
        scanf("%d",&num);
        stnode->data=num;
        stnode->link=NULL;
        tmp=stnode;
        for(i=2;i<=n;i++)
        {
            fnNode=malloc(sizeof(struct node));
            if(fnNode==NULL)
            {
                printf("Memory cant be allocated");
                break;
            }
            else
            {
                printf("Enter the data of NODE %d : ",i);
                scanf("%d",&num);
                fnNode->data=num;
                fnNode->link=NULL;
                tmp->link=fnNode;
                tmp=tmp->link;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode==NULL)
    {
        printf("No data in the list");
    }
    else
    {
        tmp=stnode;
        while(tmp!=NULL)
        {
            printf("Data in NODE : %d\n",tmp->data);
            tmp=tmp->link;
        }
    }

}

int NodeCount()
{
    int count=0;
    struct node *tmp;
    tmp=stnode;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->link;
    }
    return count;
}
int main(){
    int n,totalNode;
    printf("---LINKED LIST---\n");
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    create(n);
    printf("The Data in the List are: \n");
    displayList();
    totalNode=NodeCount();
    printf("Number of Nodes are: %d",totalNode);
    return 0;
}
