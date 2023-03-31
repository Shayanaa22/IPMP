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

map<int,int> ans;

void inorder(node*root,int l){
    if(root!=NULL){
        inorder(root->left,l-1);
        ans[l]+=root->data;
        inorder(root->right,l+1);
    }
}

void print(){
    for(auto x:ans){
        cout<<x.first<<" : "<<x.second<<endl;
    }
}


int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);
    root->right->right->right = new node(9);

    inorder(root,0);
    print();
    return 0;
}
