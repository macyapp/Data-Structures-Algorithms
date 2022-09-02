#include<iostream>
using namespace std;
#define newl cout<<endl

class node {
    public:
    int data;
    node *left;
    node *right;
    node(int k):data(k),left(nullptr),right(nullptr) {}
};

void k_dist(node *node,int k) {
    if(node==nullptr)
        return;
    if(k==0) {
        cout<<node->data<<" ";
        return;
    }
    k_dist(node->left,k-1);
    k_dist(node->right,k-1);
}

/* This is the tree
     6
    / \
   5   1
  / \   \
 3   8   7
    / \
   2   4 

*/

int main() {
    node *root=nullptr;
    root=new node(6);
    root->left=new node(5);
    root->right=new node(1);
    root->left->left=new node(3);
    root->left->right=new node(8);
    root->left->right->left=new node(2);
    root->left->right->right=new node(4);
    root->right->right=new node(7);
    k_dist(root,2);
    newl;
    return 0;
}