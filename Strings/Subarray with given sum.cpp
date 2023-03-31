#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1, 4, 20, 3, 10, 5}, sum = 33;

    int n=sizeof(arr)/sizeof(arr[0]);

    /*//twoForLoops
    for(int i=0; i<n; i++){
            int s=0;
        for(int j=i; j<n; j++){
            s=s+arr[j];
            if(s>sum){break;}
            else if(s==sum){cout<<i<<' '<<j; return;}
        }
    }*/

    //slidingWindow
    int start=0;
    int it=0;
    int s=0;
    while(it<n){
        while(s<sum && it<n){
            s+=arr[it++];
        }
        if(s==sum){cout<<start<<' '<<it-1<<endl; return 0;}
        s=s-arr[start++];
    }
    cout<<-1;
    return 0;

}
