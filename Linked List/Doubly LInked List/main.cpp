#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *prev;
    node(int x)
    :data(x),next(nullptr),prev(nullptr) {}
};

void print(node *head) {
    node *cur=head;
    while(cur!=nullptr) {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}

int main() {
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->prev=temp1;
    print(head);
    return 0;
}