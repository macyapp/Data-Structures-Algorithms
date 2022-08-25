#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int x)
    :data(x),next(nullptr) {
    }
};

int main() {
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    a->next=b;
    b->next=c;
}