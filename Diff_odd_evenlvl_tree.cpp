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

void traversal(node* root, int l){
    if(root!=NULL){
        if(l%2==0){ans-=root->data;}
        else{ans+=root->data;}
        traversal(root->right,l+1);
        traversal(root->left, l+1);
    }
}

int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    traversal(root,1);
    cout << ans;
    return 0;
}
