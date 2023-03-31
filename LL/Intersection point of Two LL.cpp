#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

void push(Node* &head, int r){
    Node* temp=new Node();
    temp->data=r;
    temp->nxt=head;
    head=temp;
}

int cOunt(Node* root){
    int c=0;
    while(root!=NULL){
        root=root->nxt;
        c++;
    }
    return c;
}

void findInte(Node* root1, Node* root2){
    int h= cOunt(root1)-cOunt(root2);
    if(h>=0){
        while(h--){
            root1=root1->nxt;
        }
        while(root1!=NULL && root2!=NULL){
            if(root1==root2){cout<<root1->data<<endl; return;}
            root1=root1->nxt;
            root2=root2->nxt;
        }
    }
    else{
        h=h* (-1);
        while(h--){
            root2=root2->nxt;
        }
        while(root1!=NULL && root2!=NULL){
            if(root1==root2){cout<<root1->data<<endl; return;}
            root1=root1->nxt;
            root2=root2->nxt;
        }
    }
    cout<<"NO INTERSECTION"<<endl;
}

int main(){

    Node* root1=NULL;
    Node* root2=NULL;
    push(root1,4);
    push(root1,3);
    push(root1,5);
    push(root1,6);
    push(root1,7);
    root2=root1;
    push(root2,10);
    push(root2,30);
    push(root2,50);
    push(root2,90);
    push(root2,2);
    push(root2,11);
    push(root1,16);
    push(root1,27);

    findInte(root1,root2);

    return 0;
}
