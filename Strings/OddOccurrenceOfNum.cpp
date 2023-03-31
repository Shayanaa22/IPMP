#include<bits/stdc++.h>
using namespace std;

//Number Occurring Odd Number of Times

int main(){

    //Input
    int n;//size of arr
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans;

    for( auto x: arr){
        ans=ans^x;
    }

    cout<<ans;

    return 0;
}

