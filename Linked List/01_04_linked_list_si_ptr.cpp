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

void printList(node *head) {
    node *curr=head;
    while(curr!=NULL) {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    if(curr==NULL)
        cout<<"NULL\n";
}

int main() {
    node *head;
    node *ptr;
    ptr=new node(10);
    head=ptr;
    
    ptr->next=new node(20);
    ptr=ptr->next;

    ptr->next=new node(30);
    ptr=ptr->next;
    
    printList(head);
    return 0;
}