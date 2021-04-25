#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node  *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;

void insert(int a) {        //insert element in sequence in forward
    newnode = (struct node *)malloc(sizeof(struct node));
    if(head == NULL) {
        newnode->data = a;
        newnode->next = NULL;
        head = newnode;
        temp = newnode;
    } else {
    newnode->data = a;
    newnode->next = NULL;
    temp->next = newnode;
    temp = newnode;
    }
    return;
}

//insert element in a specified position
void insertAt(int pos, int a) {     //this function gives something wrong
    int index = 0;
    struct node *tmp = head;
    struct node *customNode = (struct node *)malloc(sizeof(struct node));
    while (index < pos) {
        tmp = tmp->next;
        index++;
    }
    struct node *ptrVar;
    ptrVar = temp->next;
    customNode->data = a;
    customNode->next = ptrVar;
    tmp->next = customNode;
    return;
}







void display(void) {                    // Display single element
    struct node *tap = head;
    printf(" %d \n", tap->data);
    head = tap->next;
}

void displayAll(void) {                 //Display all elements
    struct node *trvs = head;
    if(trvs == NULL) {
        printf("No elements available\n");
    } else {
        while (trvs != NULL) {
        printf(" %d ", trvs->data);
        trvs = trvs->next;
    }
    printf("\n");
    }
    return;
}

int findLength(void) {      //findout length of link list
    struct node *var = head;
    int count = 0;
    while(var != NULL) {
        count++;
        var = var->next;
    }
    //printf(" Length of elements = %d \n", count);
    return count;
}

int main()  {
    insert(10); insert(20); insert(30); insert(40);insert(50);insert(70);insert(80);insert(90);
    //display(); display();
    //display(); //can't use display() and displayAll() function at same time
    //displayAll();   // either display() or displayAll() function will be use at once
    printf("Length of linklist = %d \n", findLength());
    insertAt(4, 700);
    displayAll();
    printf("Length of linklist = %d \n", findLength());
    return 0;
}
