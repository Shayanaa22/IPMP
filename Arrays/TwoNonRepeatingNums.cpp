#include<bits/stdc++.h>
using namespace std;

//Number Occurring Odd Number of Times

int main(){

    int arr[]={12, 23, 34, 12, 12, 23, 12, 45};

    int temp=0;

    for( auto x: arr){
        temp=temp^x;
    }

    int t= temp & (~(temp)+2);
    int a=0,b=0;

    for(auto x: arr){
        if(t&x){
           a=a^x;
        }else{
            b=b^x;
        }
    }
    cout<<a<<' '<<b;

    return 0;
}
