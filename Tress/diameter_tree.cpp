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

int ans=0;

int height(node* root){
    if(root==NULL){return 0;}
    ans=max(1+ height(root->left)+height(root->right),ans);
    return 1+ max(height(root->left),height(root->right));
}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    int t=height(root);
    cout << "Diameter of the given binary tree is "
         << ans;
    return 0;
}
