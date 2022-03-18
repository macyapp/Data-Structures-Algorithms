#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;   
};

void printList(node *cur) {
    while(cur!=NULL) {
        cout<<cur->data<<"->";
        cur=cur->next;
    }
    if(cur==NULL)
        cout<<"NULL\n";
}

int main() {
    node *head;
    node *cur;
    cur=new node;
    head=cur;

    cur->data=10;
    cur->next=new node;
    cur=cur->next;

    cur->data=20;
    cur->next=new node;
    cur=cur->next;

    cur->data=30;
    cur->next=NULL;

    printList(head);

    return 0;
}