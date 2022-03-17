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

void printListRec(node *ptr) {
    if(ptr==NULL) {
        cout<<"NULL\n";
        return;
    }
    cout<<ptr->data<<"->";
    printListRec(ptr->next);
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
    
    printListRec(head);
    return 0;
}