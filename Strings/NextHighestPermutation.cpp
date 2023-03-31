#include<bits/stdc++.h>
using namespace std;

void reverse(int*arr, int a,int b){
    int n=b-a-1;
    int x=n/2;
    for(int i=0;i<=x; i++){
        int j=b-1-i;
        int temp=arr[i+a];
        arr[i+a]=arr[j];
        arr[j]=temp;
    }
}

int main(){
    int n=5;
    int arr[]={9,8,7,4,1};
    int s=0;
    for(int i=n-1; i>0; i--){
        if(arr[i]>arr[i-1]){
            if(s==0){s=i;}
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            if(i!=n-1){i=i+2;}
        }
     }
    if(s==0){cout<<-1;}
    else{
    reverse(arr,s,n);

    for(auto x:arr){
        cout<<x<<' ';
    }
    }
}
