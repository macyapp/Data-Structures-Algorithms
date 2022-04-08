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
    node obj(); 
    node *head=new node(10);
    node *mid =new node(20);
    node *tail=new node(30);
    head->next=mid;
    mid->next=tail;

    printList(head);
    return 0;
}