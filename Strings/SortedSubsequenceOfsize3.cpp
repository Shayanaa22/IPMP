#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 11, 10, 5, 6, 2, 30};
    int n=sizeof(arr)/sizeof(arr[0]);

    int mini[n],maxi[n];
    int a=arr[0];
    int b=arr[n-1];mini[0]=-1,maxi[n-1]=-1;

    for(int i=1; i<n; i++){
        if(arr[i]<a){mini[i]=-1; a=arr[i];}
        else{mini[i]=a;}
    }

    for(int i=n-2; i>=0; i--){
        if(arr[i]>b){maxi[i]=-1; b=arr[i];}
        else{maxi[i]=b;}
    }

    for(int i=0; i<n; i++){
        if(mini[i]!=-1 && maxi[i]!=-1){
            cout<<mini[i]<<' '<<arr[i]<<' '<<maxi[i]<<endl;
            break;
        }
    }

    return 0;
}
