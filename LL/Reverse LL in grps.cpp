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

void Reverse(Node* &root, int k){
    if(root==NULL){return;}
    int n=k-2;
    Node* t=root;
    Node* t1=t->nxt;
    Node* t2;
    if(t1!=NULL){
    t2= t1->nxt;}else{t2=NULL;}
    while(t2!=NULL && n--){
        t1->nxt=t;
        t=t1;
        t1=t2;
        t2=t2->nxt;
    }
    if(n!=0){
        t1->nxt=t;
    }
    Node* i=root;
    root->nxt=t2;
    root=t1;
    Reverse(i->nxt,k);
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
    push(head, 10);
    push(head,3);
    push(head,12);

    traverse(head);

    Reverse(head,8);

    traverse(head);


    return 0;
}
