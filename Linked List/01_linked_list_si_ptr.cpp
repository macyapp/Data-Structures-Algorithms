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
    cout<<"NULL\n";
}

int main() {
    node *head=NULL;
    node *ptr;
    ptr=new node(10);
    head=ptr;
    ptr=ptr->next;

    ptr=new node(20);
    ptr=ptr->next;

    ptr=new node(30);
    ptr=ptr->next;

    printList(head);
    return 0;
}