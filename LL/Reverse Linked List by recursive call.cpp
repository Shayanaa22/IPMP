#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

Node* head=NULL;

void print(Node* root){
    if(root==NULL){return;}
    print(root->nxt);
    printf("%d ",root->data);
}

void push(int r){
    Node* temp= new Node();
    temp->data=r;
    if(head==NULL){
        temp->nxt=NULL;
        head=temp;
        return;
    }
    temp->nxt=head;
    head=temp;
}


int main(){
    push(4);
    push(8);
    push(7);
    push(3);
    push(12);

    print(head);

    return 0;
}
