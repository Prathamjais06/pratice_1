// Aim: Program to Implement Singly Linked List Creation and Traversal in C

#include <stdio.h>
#include <stdlib.h>


struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;


void create() {
    struct node *ptr, *cpt;
    char ch;

    ptr = (struct node*) malloc(sizeof(struct node));
    printf("Input first node information: ");
    scanf("%d", &ptr->info);
    first = ptr;

    do {
        cpt = (struct node*) malloc(sizeof(struct node));
        printf("Input next node information: ");
        scanf("%d", &cpt->info);
        
        ptr->link = cpt;
        ptr = cpt;

        printf("Press <Y/N> for more node: ");
        scanf(" %c", &ch);

    } while(ch == 'Y' || ch == 'y');

    ptr->link = NULL;
}


void display() {
    struct node *temp = first;
    if(first == NULL){
        printf("List is empty");
        return;
    }
    printf("\nLinked List is: ");
    while(temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    create();
    display();
    return 0;
}