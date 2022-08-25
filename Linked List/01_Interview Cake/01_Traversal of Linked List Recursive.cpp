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
    if(cur==nullptr) {
        cout<<endl;
        return;
    }
    cout<<cur->data<<" ";
    print(cur->next);
}

int main() {
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    a->next=b;
    b->next=c;
    print(a);
}