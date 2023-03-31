#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *right, *left;

    node(int r){
        data=r;
        left=right=NULL;
    }
};

int lvl=-1;

void leftView(node* root,int l){
    if(root!=NULL){
        if(lvl<l){
        cout<<root->data<<' ';
        lvl=l;
        }
        leftView(root->left,l+1);
        leftView(root->right,l+1);
    }
}

int main(){
    node* root = new node(10);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->right = new node(15);
    root->right->left = new node(12);
    root->right->right->left = new node(14);

    leftView(root,0);

    return 0;
}
