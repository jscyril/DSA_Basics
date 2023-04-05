#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void printList(node *ptr){
    while(ptr!=NULL){
        printf("Data at node: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void pop(int data, node *head, node *tail){
    head->next=NULL;
    free(tail);
}
int main(){
    int x;

    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));
    node *tail = (node *)malloc(sizeof(node));
    node *ptr=NULL;
    //First node
    head->data=1;
    head->next=second;
    //Second node
    second->data=2;
    second->next=third;
    //Third node
    third->data=3;
    third->next=fourth;
    //Fourth node
    fourth->data=4;
    fourth->next=tail;
    //Final node
    tail->data=5;
    tail->next=NULL;
    //Printing
    ptr=head;
    printList(ptr);
    //Deletion:
    pop(x,fourth,tail);
    printf("The node at the end of the list has been deleted\nNew linked list:\n");
    ptr=head;
    printList(ptr);
}