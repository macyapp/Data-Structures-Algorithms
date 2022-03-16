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
    node obj(); 
    node *head=new node(10);
    node *mid =new node(20);
    node *tail=new node(30);
    head->next=mid;
    mid->next=tail;

    printList(head);
    return 0;
}