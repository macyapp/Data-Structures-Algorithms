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