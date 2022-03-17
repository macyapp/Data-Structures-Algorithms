#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int x) {
        data=x;
        next=NULL;
    }   
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
    // Initializing list
    ptr=new node(10);
    head=ptr;
    
    ptr->next=new node(20);
    ptr=ptr->next;

    ptr->next=new node(30);
    ptr=ptr->next;

    // Inserting at the beginning
    ptr=new node(15);
    ptr->next=head;
    head=ptr;
    
    printList(head);
    return 0;
}