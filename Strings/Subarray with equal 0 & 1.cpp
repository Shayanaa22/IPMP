#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 0, 0, 1, 0, 1, 1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum[n];
    int k=0;


    for(int i=0; i<n; i++){
            int a;
            if(arr[i]==1){a=1;}
            else{a=-1;}
            k=k+a;
            sum[i]=k;
    }
    for(auto x:sum){
        cout<<x<<' ';
    }
    map<int,int> ht;

    int ans=-1;
    int a=0;
    int b;

    for(int i=0; i<n; i++){
        int r=sum[i];
        if(sum[i] == 0) {
            ans = i + 1;
            a = 0;
            b=i;
        }
        else if(ht.find(r)==ht.end()){
            ht[r]=i;
        }
        else{
            int temp= i- ht[r];
            if(temp>ans){
                ans=temp;
                a=ht[r]+1,b=i;
            }
        }
    }

    cout<<'\n'<<ans<<endl;
    cout<<a<<' '<<b<<endl;

    return 0;
}
