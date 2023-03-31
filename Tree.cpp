#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int k){
        data=k;
        left=right=NULL;
    }
};

class tree{
public:
    node* head;
    int Size=0;
    int height=0;
    vector<vector<int>> lvl;


    tree(node* root){
    head=root;
    size_tree(root);
    height=h(root);
    lorder(root,0);
    }
    void lorder(node* root, int l){
        if(root!=NULL){
            if(lvl.size()<=l){lvl.push_back({});}
            lvl[l].push_back(root->data);
            lorder(root->left,l+1);
            lorder(root->right,l+1);
        }
    }
    void LVLorder(){
        cout<<'\n'<<"LEVEL ORDER TRAVERSAL:"<<endl;
        for(auto x:lvl){
            for(auto r:x){
                cout<<r<<' ';
            }
            cout<<'\n';
        }
    }
    void lorder_spiral(){
        cout<<'\n'<<"LEVEL ORDER TRAVERSAL IN SPIRAL FORM:"<<endl;
        for(int i=0; i<lvl.size(); i++){
            if(i%2==0){
                for(int j=lvl[i].size()-1;j>=0; j--){
                    cout<<lvl[i][j]<<' ';
                }
            }
            else{
                for(int j=0; j<lvl[i].size(); j++){
                    cout<<lvl[i][j]<<' ';
                }
            }
        }
    }

    void reverselvl(){
        cout<<'\n'<<"LEVEL ORDER TRAVERSAL:"<<endl;

    }
    int maximumwidth(){
        int ans=0;
        for(int i=0;i< lvl.size(); i++){
            ans=max(ans, (int)lvl[i].size());
        }
        return ans;
    }
    void size_tree(node* temp){
        if(temp!=NULL){
                Size++;
            size_tree(temp->right);
            size_tree(temp->left);
        }
    }
    int h(node* temp){
        if(temp!=NULL){
            return 1+ max(h(temp->right),h(temp->left));
        }
        return 0;
    }
    void inorder(){
        cout<<"\nINORDER TRAVERSAL"<<endl;
        func1(head);
    }
    void func1(node* root){
        if(root!=NULL){
            func1(root->left);
            cout<<root->data<<' ';
            func2(root->right);
        }
    }
    void preorder(){
        cout<<"\nPREORDER TRAVERSAL"<<endl;
        func2(head);
    }
    void func2(node* root){
        if(root!=NULL){
            cout<<root->data<<' ';
            func1(root->left);
            func2(root->right);
        }
    }
    void postorder(){
        cout<<"\nPOSTORDER TRAVERSAL"<<endl;
        func3(head);
    }
    void func3(node* root){
        if(root!=NULL){
            func1(root->left);
            func2(root->right);
            cout<<root->data<<' ';
        }
    }
};

bool identical(node* r1, node* r2){
    while(r1!=NULL && r2!=NULL){
        return (r1->data==r2->data) && identical(r1->left,r2->left) && identical(r1->right,r2->right);
    }
    if(r1==NULL && r2==NULL){return true;}
    return false;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(8);
    root->right->right->left = new node(6);
    root->right->right->right = new node(7);
    tree *t=new tree(root);
    cout<<t->Size<<endl;
    cout<<t->height<<endl;
    //t->inorder();
    //t->preorder();
    //t->postorder();
    t->LVLorder();
    cout<<"Maximum width: "<<t->maximumwidth()<<endl;

    node* root2 = new node(1);
    root2->left = new node(2);
    root2->right = new node(3);

    string result= identical(root,root2)?"TREES ARE IDENTICAL!": "NOT IDENTICAL!";

    cout << result<<endl;

    return 0;

}
