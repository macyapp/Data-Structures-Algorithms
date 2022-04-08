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

void printListRec(node *cur) {
    if(cur==NULL) {
        cout<<"NULL\n";
        return;
    }
    cout<<cur->data<<"->";
    printListRec(cur->next);
}

int main() {
    node *head=NULL;
    node *cur;
    cur=new node(10);
    head=cur;
    
    cur->next=new node(20);
    cur=cur->next;

    cur->next=new node(30);
    cur=cur->next;
    
    printListRec(head);
    return 0;
}