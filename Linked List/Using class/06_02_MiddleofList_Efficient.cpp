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

class LinkedList {
public:
    int n=0,i;
    node *head=NULL;
    node *cur;

    void printList() {
        cur=head;
        while(cur!=NULL) {
            cout<<cur->data<<"->";
            cur=cur->next;
        }
        if(cur==NULL)
            cout<<"NULL\n";
    }

    void append(int x) {
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
    }
    void middle() {
        node *slow=head;
        node *fast=head;
        while(fast&&fast->next) {
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->data<<"\n";
    }
    
};

int main() {
    LinkedList ll;
    ll.printList();
    ll.append(10);
    ll.append(20);
    ll.append(30);
    ll.printList();
    ll.middle();
    return 0;
}