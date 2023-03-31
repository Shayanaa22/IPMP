#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *right, *left,*nxt;

    node(int r){
        data=r;
        left=right=nxt=NULL;
    }
};


node* st=NULL;

void inorder(node* root){
    if(root!=NULL){
        inorder(root->right);
        root->nxt=st;
        st=root;
        //cout<<root->data<<' '<<root<<' '<<root->nxt<<endl;
        inorder(root->left);
    }
}

void print(node* root){
    if(root!=NULL){
        print(root->left);
        if(root->nxt==NULL){cout<<root->data<<" next -1"<<endl;}
        else{cout<<root->data<<" next "<<root->nxt->data<<endl;}
        print(root->right);
    }
}

int main(){
    node* root = new node(10);
    root->left = new node(8);
    root->right = new node(12);
    root->left->left = new node(3);

    inorder(root);
    print(root);

    return 0;
}
