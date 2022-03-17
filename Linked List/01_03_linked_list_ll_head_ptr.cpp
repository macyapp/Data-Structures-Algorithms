#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;   
};

void printList(node *ptr) {
    while(ptr!=NULL) {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    if(ptr==NULL)
        cout<<"NULL\n";
}

int main() {
    node *head;
    node *ptr;
    ptr=new node;
    head=ptr;

    ptr->data=10;
    ptr->next=new node;
    ptr=ptr->next;

    ptr->data=20;
    ptr->next=new node;
    ptr=ptr->next;

    ptr->data=30;
    ptr->next=NULL;

    printList(head);

    return 0;
}