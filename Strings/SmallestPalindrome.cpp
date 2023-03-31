#include <bits/stdc++.h>
using namespace std;

int num(char c){
        int i=(int)'0';
        int k= c;
        return k-i;
}

char ct(int n){
    int t='0';
    char c= n+t ;
    return c;
}

int main(){
    string str;
    cin>>str;

    int n=str.length()-1;
    int x=n/2;
    int p=0;

    //check if it's a palindrome or not
    //if not convert it into palindrome
    for(int i=x; i>=0; i--){
        int j=n-i;
        if(str[i]>str[j]){
            //cout<<str[i]<<str[j]<<endl;
            p=1;
            break;
        }
    }
    cout<<p<<endl;
    if(p==0){
    for(int i=x; i>=0; i--){
        int j=n-i;
        if(str[i]>str[j]){
            str[j]=str[i];
            break;
        }
        else if(str[i]==str[j]){
            if(str[i]=='9'){
                str[i]=='0';
                str[j]=='0';
                if(i==0){
                    str="1"+str+"1";
                    break;
                }
            }else{
                str[i]=ct(num(str[i])+1);
                break;
            }

        }
    }}

    for(int i=0; i<=x;i++){
            int j=n-i;
            str[j]=str[i];
    }

    for(auto x:str){
        cout<<x;
    }

}

