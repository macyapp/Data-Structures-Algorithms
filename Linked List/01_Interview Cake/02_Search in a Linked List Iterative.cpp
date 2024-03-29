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
    if(head==nullptr) {
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}

void search(node* head,int x) {
    int pos=0;
    node* cur=head;
    while(cur!=nullptr) {
        if(cur->data==x) {
            pos++;
            cout<<x<<" is present at "<<pos<<endl;
            return;
        }
        else {
            pos++;
            cur=cur->next;
        }
    }
    cout<<"Element not present\n";
}

int main() {
    node* a=new node(10);
    node* b=new node(5);
    node* c=new node(20);
    node* d=new node(15);
    a->next=b;
    b->next=c;
    c->next=d;
    print(a);
    search(a,20);
}