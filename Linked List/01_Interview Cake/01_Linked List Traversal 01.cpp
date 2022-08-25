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

int main() {
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    a->next=b;
    b->next=c;
	node* head=a;
	cout<<head->data<<" ";
	head=head->next;
	cout<<head->data<<" ";
	head=head->next;
	cout<<head->data<<endl;
}