#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* top=NULL;
void push(int);
void pop();
void display();
int main()
{
    int ch,element;
    while(1)
    {
        printf("\n press 1.push 2.pop 3.display 4. exit\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter element to pushed");
            scanf("%d",&element);
            push(element);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4: exit(1);
            break;
            default: printf("wrong choice");
            break;
        }
    }
    return 0;
}
void push(int element)
{
    struct node*temp;
    int x;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("stack overflow...");
    }
    temp->data=element;
    temp->next=NULL;
    if(top==NULL)
    top=temp;
    else
    {
        temp->next=top;
        top=temp;
    }
}
void pop()
{
    struct node*ptr;
    if(top==NULL)
    printf("stack underflow");
    else{
        ptr=top;
        printf("pop element=%d",top->data);
        top=top->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=top;
    if(top==NULL)
    printf("stack is empty");
    else{
        printf("\n stack element);
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}