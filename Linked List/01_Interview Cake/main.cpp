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
}

int main() {
    node* head=nullptr;
}