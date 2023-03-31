#include <bits/stdc++.h>
using namespace std;

//Missing number from 1 to n range

int main(){

    int t;
    cin>>t;//arr size

    int arr[t];

    for(int i=0; i<t; i++){
        cin>>arr[i];
    }

    int sum=0;

    for(auto x:arr){
     sum+=x;
    }

    cout<< ((t+1)*(t+2)/2)  - sum;

    return 0;
}
