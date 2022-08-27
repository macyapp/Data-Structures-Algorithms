#include<iostream>
using namespace std;
#define endl "\n"

class node {
public:
    int data;
    node* next;

    node(int x)
    :data(x),next(nullptr) {
    }
};

void print(node* head) {
    node* cur=head;
    while(cur!=nullptr) {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}

void push(node** head, int x) {
    node* cur=*head;
    node* newNode=nullptr;
    if(cur==nullptr) {
        newNode=new node(x);
        *head=newNode;
        return;
    }
    while(cur->next!=nullptr) {
        cur=cur->next;
    }
    newNode=new node(x);
    cur->next=newNode;
}

int main() {
    node* head=nullptr;
    int n,x;
    cin>>n;
    while(n--) {
        cin>>x;
        push(&head,x);
    }
    print(head);
}