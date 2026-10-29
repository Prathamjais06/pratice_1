#include <stdio.h>
#include <stdlib.h>

#define maxsize 30

int stack[maxsize];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int ch;

    while (ch)
    {
        printf("\n\n--- STACK MENU ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        // printf("\n3. Display");
        // printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            // case 3:
            //     display();
            //     break;

            // case 4:
            //     exit(0);

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}

void push()
{
    int no;

    if (top == maxsize - 1)
    {
        printf("\nStack Overflow!");
        return;
    }

    printf("\nEnter number: ");
    scanf("%d", &no);

    top++;
    stack[top] = no;

    printf("\n%d pushed into stack.", no);

    display();
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!");
        return;
    }

    printf("\n%d popped from stack.", stack[top]);

    top--;

    display();
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is empty!");
        return;
    }

    printf("\nElements in stack are:\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}   