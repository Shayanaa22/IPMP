#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n][n]={{1,    2,   3,   4},
                   {5,    6,   7,   8},
                   {9,   10,  11,  12},
                   {13,  14,  15,  16 }};

    int x=0;
    int i=0,j=0;
    int p=1;
    int temp=n-1;
    for(i=0;i<n; i++){
        cout<<arr[j][i]<<' ';
    }
    i=n-1;

    while(temp>0){
        int t=temp;
        while(t--){
                if(p==1){cout<<arr[++j][i]<<' ';}
                else{cout<<arr[--j][i]<<' ';}
        }
        p=p*-1;
        t=temp;
        while(t--){
                if(p==1){cout<<arr[j][++i]<<' ';}
                else{cout<<arr[j][--i]<<' ';}
        }
        temp--;
    }

    return 0;
}
