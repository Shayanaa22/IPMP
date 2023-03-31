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

void Rotate(Node* &head, int k){
    Node* temp= head;
    while(k-- !=1){
        temp=temp->nxt;
    }
    Node* p1= temp->nxt;
    Node* p=temp;
    temp=temp->nxt;
    p->nxt=NULL;
    while(temp->nxt!=NULL){
        temp=temp->nxt;
    }
    temp->nxt=head;
    head=p1;
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

    Rotate(head,3);

    traverse(head);


    return 0;
}
