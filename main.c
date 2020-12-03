#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node  *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;

void insert(int a) {
    newnode = (struct node *)malloc(sizeof(struct node));
    if(head == NULL) {
        newnode->data = a;
        head = newnode;
        //head->next = nullptr;
        temp = newnode;
    } else {
    newnode->data = a;
    temp->next = newnode;
    temp = newnode;
    }

}
void display(void) {
    struct node *tap = head;
    printf(" %d ", tap->data);
    head = tap->next;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
    display();
    display();
    return 0;
}
