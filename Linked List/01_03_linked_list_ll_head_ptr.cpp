#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;   
};

void printList(node *p) {
    while(p!=NULL) {
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<"NULL\n";
}

int main() {
    node *head=NULL;
    node *ptr;
    head=new node;
    ptr=head;

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