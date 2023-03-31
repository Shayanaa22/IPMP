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

void sOrt(Node* root){
    Node* temp=root;
    while(temp!=NULL){
        Node* t=root;
        while(t!=temp){
            if(temp->data<t->data){}
        }
    }
}

Node* Uni=NULL;
Node* Inte=NULL;

void func(Node* root1, Node* root2){
    while(root1!=NULL && root2!=NULL){
        if(root1->data==root2->data){
            push(Uni,root1->data);
            push(Inte,root1->data);
            root1->nxt; root2->nxt;
        }
        else if(root1->data>root2->data){
            push(Uni,root2->data);
            root2=root2->nxt;
        }
        else{
            push(Uni,root1->data);
            root1=root1->nxt;
        }
    }
}
