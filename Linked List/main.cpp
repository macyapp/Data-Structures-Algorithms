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
        // Case for single node
        else if(ptr->next==NULL) {
            ptr=head->next;
            delete head;
            head=ptr;
        }
        // More than one node
        else {
            while(ptr->next->next!=NULL) {
                ptr=ptr->next;
            }
            delete ptr->next;
            ptr->next=NULL;
        }
    }

    void insertAt(int pos, int x) {
        node *newNode=new node(x);
        ptr=head;
        if(pos<1) {
            cout<<"Position should be >= 1\n";
        }
        else if(pos==1) {
            newNode->next=head;
            head=newNode;
        }
        else {
            for(int i=1;i<pos-1;i++) {
                if(ptr!=NULL) {
                    ptr=ptr->next;
                }
            }
            if(ptr!=NULL) {
                newNode->next=ptr->next;
                ptr->next=newNode;
            }
            else {
                cout<<"Previous node is NULL\n";
            }

        }
    }

};

int main() {
    LinkedList ll;

    ll.insertEnd(10);
    ll.printList();
    ll.insertEnd(20);
    ll.printList();
    ll.insertEnd(30);
    ll.printList();
    ll.insertAt(6,15);
    ll.printList();
    return 0;
}