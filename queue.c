#include <stdio.h>
#include <stdlib.h>
#define size 5

struct queue
{
    int front, rear;
    int arr[size];
} s1;

int enqueue(int arr[], int front, int rear)
{
    int qnew;
    if (s1.front == s1.rear + 1 || s1.front == 0 && s1.rear == size - 1)
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("\nEnter a element - ");
        scanf("%d", &qnew);
        //s1.rear = (s1.rear + 1) % size;

        s1.arr[s1.rear] = qnew;
        if (s1.front == -1)
        {
            s1.front++;
        }
        s1.rear++;
    }
}

int dequeue(int arr[], int front, int rear)
{
    if (s1.front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        if (s1.front == s1.rear)
        {
            s1.front = -1;
            s1.rear = -1;
        }
        else
        {
            s1.front = (s1.front + 1) % size;
        }
    }
}

int display(int arr[], int front, int rear)
{
    if (s1.front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\n Items -> ");
        for (int i = s1.front; i != s1.rear; i = (i + 1) % size)
        {
            printf("%d ", s1.arr[i]);
        }
    }
}

int main()
{
    int ch;
    s1.front = -1;
    s1.rear = -1;
    s1.arr[size];
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice - ");
    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(s1.arr, s1.front, s1.rear);
            break;
        case 2:
            dequeue(s1.arr, s1.front, s1.rear);
            break;
        case 3:
            display(s1.arr, s1.front, s1.rear);
            break;
        case 4:
            printf("\nThanks");
            exit(0);
            // break;
        default:
            printf("\nInvalid choice");
        }
        printf("\nEnter choice - ");
    } while (ch != 4);
    return 0;
}