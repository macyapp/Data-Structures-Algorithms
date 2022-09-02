#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node(int x):data(x),next(nullptr) {}
};

void push(node **head,int x) {
    node *tmp=new node(x);
    node *cur=*head;
    if(cur==nullptr) {
        *head=tmp;
        return;
    }
    while(cur->next!=nullptr) {
        cur=cur->next;
    }
    cur->next=tmp;
}

node *insertHead(node *head,int x) {
    node *newNode=new node(x);
    if(head==nullptr)
        return newNode;
    
}

void print(node *head) {
    node *cur=head;
    if(cur!=nullptr) {
        while(cur!=nullptr) {
            cout<<cur->data<<" ";
            cur=cur->next;
        }
        cout<<endl;
    }
    else {
        cout<<"NULL\n";
    }
}

int main() {
    node *head=nullptr;
    int n,x;
    cin>>n;
    while(n--) {
        cin>>x;
        push(&head,x);
    }
    print(head);
}