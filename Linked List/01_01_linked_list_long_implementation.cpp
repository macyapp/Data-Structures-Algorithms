#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;   
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
    node *head=NULL;
    node *mid =NULL;
    node *tail=NULL;

    head=new node;
    mid =new node;
    tail=new node;

    head->data=10;
    head->next=mid;

    mid->data=20;
    mid->next=tail;

    tail->data=30;
    tail->next=NULL;

    printList(head);

    return 0;
}