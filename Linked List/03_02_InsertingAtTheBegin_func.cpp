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
    node *ptr;
    void printList() {
        ptr=head;
        while(ptr!=NULL) {
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        if(ptr==NULL)
            cout<<"NULL\n";
    }

    void insertBegin(int x) {
        ptr=new node(x);
        ptr->next=head;
        head=ptr;
    }
    
    void insertEnd(int x) {
        ptr=head;
        if(ptr==NULL) {                 // If list is empty
            ptr=new node(x);
            head=ptr;
        }
        else {
            while(ptr->next!=NULL) {    // If list has not empty
                ptr=ptr->next;
            }
            ptr->next=new node(x);
        }
    }

    void deleteBegin() {
        ptr=head;
        if(ptr==NULL) {
            cout<<"List is already empty\n";
        }
        else {
            ptr=head->next;
            delete head;
            head=ptr;
        }
    }

    void deleteEnd() {
        ptr=head;
        if(ptr==NULL) {
            cout<<"List is already empty\n";
        }
        else if(ptr->next==NULL) {          // Case for single node
            ptr=head->next;
            delete head;
            head=ptr;
        }
        else {
            while(ptr->next->next!=NULL) {  // More than one node
                ptr=ptr->next;
            }
            delete ptr->next;
            ptr->next=NULL;
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