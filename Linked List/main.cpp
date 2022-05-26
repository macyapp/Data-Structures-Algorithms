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
        while(cur!=NULL) {
            cout<<cur->data;
            if(cur->next!=NULL)
                cout<<"->";
            cur=cur->next;
        }
        cout<<"\n";
    }

    void append(int x) {
        
    }
};

int main() {
    LinkedList ll;
    ll.printList();
    return 0;
}