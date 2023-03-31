#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

Node* head=NULL;

Node* temp;
int i=0;

void func(Node* root){
    //cout<<root->data<<endl;
    if(root==NULL){return;}
    func(root->nxt);
    if(i==1){return;}
    cout<<root->data<<" "<<temp->data<<endl;
    if(temp->data!=root->data){i=1;return;}
    temp=temp->nxt;
}

void push(int r){
    Node* k=new Node();
    k->data=r;
    k->nxt=head;
    head=k;
}

int main(){
    push(4);
    push(8);
    push(7);
    push(3);
    push(12);
    temp=head;

    func(head);

    if(i==0){cout<<"Palindrome";}
    else{cout<<"Not a Palindrome";}

    return 0;
}
