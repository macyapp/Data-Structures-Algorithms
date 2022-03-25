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
        cur=head;
        while(cur) {
            n++;
            cur=cur->next;
        }
        cur=head;
        for(i=0;i<n/2;i++) {
            cur=cur->next;
        }
    }
    
};

int main() {
    LinkedList ll;
    ll.printList();
    ll.append(10);
    ll.append(20);
    ll.append(30);
    ll.printList();
    return 0;
}