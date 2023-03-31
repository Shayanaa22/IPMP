#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *right, *left, *nextright;

    node(int r){
        data=r;
        left=right=nextright=NULL;
    }
};

vector<node*> lvl;

void func(node *root,int l){
    if(root!=NULL){
        if(lvl.size()<l-1){lvl.push_back(NULL);}
        func(root->right,l+1);
        root->nextright=lvl[l-1];
        lvl[l-1]=root;
        func(root->left,l+1);
    }
}

void print(node*root){
    if(root!=NULL){
        print(root->left);
        if(root->nextright==NULL){cout<<root->data<<' '<<-1<<endl;}
        else{cout<<root->data<<' '<<root->nextright->data<<endl;}
        print(root->right);
    }
}


int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(8);
    root->right->right->left = new node(6);
    root->right->right->right = new node(7);

    func(root,1);
    print(root);

    return 0;
}

