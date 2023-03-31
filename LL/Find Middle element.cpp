#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* nxt;
};

struct node* head=NULL;

void push(int r){
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=r;
    temp->nxt=head;
    head=temp;
}

void middle(struct node* root){
            struct node* p1=root;
            struct node* p2=root->nxt;
            while(p2!=NULL && p2->nxt!=NULL){
                p2=p2->nxt->nxt;
                p1=p1->nxt;
            }
            cout<<"MIDDLE ELEMENT: "<<p1->data<<endl;
}

int main(){
    push(5);
    push(9);
    push(4);
    push(8);
    push(7);
    push(3);
    push(12);

    middle(head);


    return 0;
}
