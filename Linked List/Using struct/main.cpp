#include<iostream>
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

void traverse() {

}

node *append(node *head,int x) {
    node *cur;
    cur=head;
    if(cur==NULL) {                 // If list is empty
        cur=new node(x);
        head=cur;
    }
    else {
        while(cur->next!=NULL) {    // If list has not empty
            cur=cur->next;
        }
        cur->next=new node(x);
    }
    return head;
}

int main() {
    node *head=NULL;
    node *cur;

    head=append(head,10);
    head=append(head,20);
    head=append(head,30);
    

    return 0;
}