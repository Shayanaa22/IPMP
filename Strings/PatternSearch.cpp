#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt = "THIS IS A TEST TEXT";
    string pat = "TEST";

    if(txt.length()<pat.length()){cout<<-1;}
    else{
        for(int i=0; i<txt.length()-pat.length()+1; i++){
            int j;
            for(j=0; j<pat.length();j++){
                if(pat[j]!=txt[i+j]){break;}
            }
            if(j==pat.length()){cout<<"Pattern found at index:"<<i<<endl; }
        }
    }
    return 0;
}
