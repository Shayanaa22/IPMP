#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

void push(Node* &root, int r){
    Node* temp=new Node();
    temp->data=r;
    temp->nxt=root;
    root=temp;
}

void deleteAlternate(Node* root){
    while(root!=NULL && root->nxt!=NULL){
        root->nxt=root->nxt->nxt;
        root=root->nxt;
    }
}

void traverse(Node* root){
    cout<<""<<endl;
    while(root!=NULL){
        cout<<root->data<<" ";
        root=root->nxt;
    }

}

int main(){
    Node* head=NULL;
    push(head,5);
    push(head,9);
    push(head,4);
    push(head,8);
    push(head,7);
    push(head,3);
    push(head,12);

    traverse(head);

    deleteAlternate(head);

    traverse(head);


    return 0;
}
