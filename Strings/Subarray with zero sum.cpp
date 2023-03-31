#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 4, -2, -2, 5, -4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum[n];
    sum[0]=arr[0];

    for(int i=1; i<n; i++){
        sum[i]=sum[i-1]+arr[i];
    }

    set<int>st;
    for(auto x:sum){
        if(st.find(x)==st.end()){st.insert(x);}
        else{cout<<"YES";return 0;}
    }
    cout<<-1;

    return 0;
}
