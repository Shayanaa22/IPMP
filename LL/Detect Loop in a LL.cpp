#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

Node* head=NULL;

void push(int r){
    Node* temp=new Node();
    temp->data=r;
    temp->nxt=head;
    head=temp;
}

Node* findNode(Node* root){
    Node* temp=root;
    int c=0;

    while(temp!=NULL){
        Node* r=root;
        int x=0;
        while(r!=temp){
            r=r->nxt;
            x++;
        }
        if(x!=c){return r;}
        temp=temp->nxt;
        c++;
    }
    cout<<"NO LOOP DETECTED"<<endl;
    return NULL;

}

void removeLoop(Node* root){
    Node* k=findNode(root);
    Node* temp=root;
    int s=0;

    if(k!=NULL){
        while(s==0 || temp->nxt!=k){
            if(temp->nxt==k){s++;}
            temp=temp->nxt;
        }
        temp->nxt=NULL;
    }
}

void traverse(Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        traverse(root->nxt);
    }
}



int main(){

    push(4);
    push(8);
    push(7);
    push(3);
    push(12);

    removeLoop(head);


    Node* temp=head;

    while(temp->nxt!=NULL){
        temp=temp->nxt;
    }

    temp->nxt=head;
    //traverse(head);

    removeLoop(head);
    removeLoop(head);
    traverse(head);

    return 0;
}

