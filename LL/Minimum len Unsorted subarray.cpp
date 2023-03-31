#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n){
    int a,b;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){a=i;break;}
        if(i==n-2){cout<<"Length Unsorted Subarray: 0"<<endl;return;}
    }

    for(int i=n-1; i>0;i--){
        if(arr[i]<arr[i-1]){b=i; break;}
    }

    int miN=arr[a+1], maX=arr[a+1];

    for(int i=a+1; i<b; i++){
        if(arr[i]<miN){miN=arr[i];}
        if(arr[i]>maX){maX=arr[i];}
    }

    for(int i=0; i<=a; i++){
        if(arr[i]>miN){a=i; break;}
    }

    for(int i=n-1; i>=b; i--){
        if(arr[i]<maX){b=i;break;}
    }

    cout<<"Length Unsorted Subarray: "<<b-a+1<<endl;
    cout<<"Lies btw: "<<a<<" and "<<b<<endl;

}

int main(){
    int arr[]={ 10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60 };
    int n=sizeof(arr)/sizeof(arr[0]);

    func(arr,n);

    return 0;
}

/*
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int a,b;
        int n=nums.size();
        if(n==1){return 0;}
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){a=i; break;}
            if(i==n-2){return 0;}
        }
        for(int i=n-1; i>0; i--){
            if(nums[i]<nums[i-1]){b=i; break;}
        }
        cout<<b<<endl;
        int max=nums[a],min=nums[a];
        for(int i=a;i<=b; i++){
            if(nums[i]>max){max=nums[i];}
            else if(nums[i]<min){min=nums[i];}
        }
        cout<<b<<endl;

        for(int i=0; i<a;i++){
            if(nums[i]>min){a=i; break;}
        }

        for(int i=n-1; i>b; i--){
            if(nums[i]<max){b=i; break;}
        }

        cout<<nums[a]<<' '<<nums[b];

        return b-a+1;

    }
};

*/
