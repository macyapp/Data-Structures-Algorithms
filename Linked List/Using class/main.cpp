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

    int getLength() {
        int length=0;
        cur=head;
        if(cur==NULL)
            length=0;
        else {
            while(cur) {
                cur=cur->next;
                length++;
            }
        }
        return length;
    }

    void nthNode(int n) {
        int len=getLength();
        int i;
        cur=head;
        if(n<=len) {
            for(i=1;i<(len-n+1);i++) {
                cur=cur->next;
            }
            cout<<cur->data<<"\n";
        }
        else {
            cout<<"nth node exceeds length\n";
        }
    }
};

int main() {
    LinkedList ll;
    ll.printList();
    // ll.append(10);
    // ll.append(20);
    // ll.append(30);
    ll.printList();
    ll.nthNode(1);
    return 0;
}