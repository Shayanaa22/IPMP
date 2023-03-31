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
int complete=0;

void traversal(node* root, int l){
    if(root!=NULL){
        if(complete){return;}
        if(root->left==NULL && root->right==NULL){
            if(!ans){ans=l;}
            else if(ans!=l){cout<<"NOT in same lvl!";complete=1; return;}
        }
        else{
        traversal(root->right,l+1);
        traversal(root->left, l+1);
        }
    }
}

int main(){
    node *root = new node(12);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(9);
    root->left->left->left = new node(1);
    root->left->right->left = new node(1);

    traversal(root,1);
    if(!complete){cout<<"LEAVES AT SAME LVL!";}
    return 0;
}
