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
    cur=new node(10);
    head=cur;
    
    cur->next=new node(20);
    cur=cur->next;

    cur->next=new node(30);
    cur=cur->next;
    
    printList(head);
    return 0;
}