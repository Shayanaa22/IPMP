#include <bits/stdc++.h>

//Union & Intersection of Sorted arrays

using namespace std;

int main(){
    
    int arr1[]={1,2,5,6,7,9,10};
    int arr2[]={2,3,4};
    

    vector<int> ans;
    vector<int> inte;

    int i=0;
    int j=0;
    int s1= sizeof(arr1)/sizeof(arr1[0]);
    int s2= sizeof(arr2)/sizeof(arr2[0]);

    
    while(i<s1 && j< s2){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j++]);
        }
        else{
           inte.push_back(arr1[i++]);
           ans.push_back(arr2[j++]);
        }
    }
    while(i!= s1){
       ans.push_back(arr1[i++]); 
    }
    while(j!=s2){
        ans.push_back(arr2[j++]);
    }
    cout<<"UNION:"<<endl;
    for(auto x: ans){
        cout<< x<<' ';
    }
    
    cout<<"\nINTERSECTION:"<<endl;
    
    for(auto x: inte){
        cout<<x<<' ';
    }
    return 0;

}