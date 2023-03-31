#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {-7, 1, 5, 2, -4, 3, 0};
    int total=0;
    for(auto x:A){
        total+=x;
    }

    int h=0;
    for(int i=0; i<n;i++){
        int temp= total - A[i]-h;
        if(h==temp){cout<<i<<endl; return 0;}
        h+=A[i];
    }
    cout<<-1;
    return 0;
}
