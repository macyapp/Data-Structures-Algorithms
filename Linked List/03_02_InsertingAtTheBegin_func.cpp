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
    node *head;
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

    void insertBegin(int x) {
        cur=new node(x);
        cur->next=head;
        head=cur;
    }
    
    void insertEnd(int x) {
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

    void deleteBegin() {
        cur=head;
        if(cur==NULL) {
            cout<<"List is already empty\n";
        }
        else {
            cur=head->next;
            delete head;
            head=cur;
        }
    }

    void deleteEnd() {
        cur=head;
        if(cur==NULL) {
            cout<<"List is already empty\n";
        }
        // Case for single node
        else if(cur->next==NULL) {
            cur=head->next;
            delete head;
            head=cur;
        }
        // More than one node
        else {
            while(cur->next->next!=NULL) {
                cur=cur->next;
            }
            delete cur->next;
            cur->next=NULL;
        }
    }

};

int main() {
    LinkedList ll;

    ll.insertEnd(15);
    ll.printList();
    ll.insertEnd(10);
    ll.printList();
    ll.deleteEnd();
    ll.printList();
    ll.deleteEnd();
    ll.printList();
    return 0;
}