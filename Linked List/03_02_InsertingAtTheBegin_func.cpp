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
};

int main() {
    LinkedList ll;
    ll.printList();
    ll.insertBegin(15);
    ll.printList();
    ll.insertEnd(10);
    ll.printList();
    ll.insertEnd(20);
    ll.printList();
    ll.insertEnd(30);
    ll.printList();

    return 0;
}