#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left, *right;

    node(int r){
        data=r;
        left=right=NULL;
    }
};

node* Delete(node* root){
    if(root!=NULL){
        root->left=Delete(root->left);
        root->right=Delete(root->right);
        cout<<root->data<<' ';
        free(root);
        return NULL;
    }
    return NULL;
}

int main(){
    node *root = new node(12);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(9);
    root->left->left->left = new node(1);
    root->left->right->left = new node(1);

    Delete(root);
    if(root==NULL){cout<<"SUCCESSFULLY DELETED!";}
    return 0;
}
