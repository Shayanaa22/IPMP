#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

void push(Node* &root, int r){
    Node* temp= new Node();
    temp->data= r;
    temp->nxt= root;
    root=temp;
}

void func(Node* root1, Node* root2){
    while(root1!=NULL && root2!=NULL){
        if(root1==root2){
            cout<<"INTERSECTION FOUND, AT: "<<root1->data<<endl;
            return;
        }
        else if(root1->data==root2->data){
            root2=root2->nxt;
            root1=root1->nxt;
        }
        else if(root1->data>root2->data){
            root2=root2->nxt;
        }
        else{
            root1=root1->nxt;
        }
    }

    cout<<"NO INTERSECTION FOUND!"<<endl;
}

int main(){

    Node* root1=NULL;
    Node* root2=NULL;
    push(root1,40);
    push(root1,37);
    push(root1,35);
    push(root1,26);
    push(root1,17);
    root2=root1;
    push(root2,15);
    push(root2,13);
    push(root2,5);
    push(root2,2);
    push(root2,1);
    push(root1,16);
    push(root1,7);

    func(root1,root2);

    return 0;
}
