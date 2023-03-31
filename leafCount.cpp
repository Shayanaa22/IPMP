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

int ans=0;

void leaf(node* root){
    if(root!=NULL){
        if(root->left==NULL && root->right==NULL){
        ans++;
        }
        leaf(root->left);
        leaf(root->right);
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

    leaf(root);

    cout<<ans;

    return 0;
}
