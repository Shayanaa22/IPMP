#include<bits/stdc++.h>

using namespace std;

void func(vector<char> &k){
    int t=0;
    for(int i=0;i<k.size();i++){
        int c=i;
        while(c<k.size()-1){
            if(k[i]!=k[c+1]){break;}
            c++;
        }
        c=c-i;
        //cout<<c;
        if(c!=0){
            c=c+1;
        while(c--){
            k.erase(k.begin()+i);
            t++;
        }}
    }
    if(t!=0){func(k);}

}

int main(){
    string s="azxxzy";
    vector<char> v;
    //cout<<'Y';

    for(auto x:s){
        v.push_back(x);
    }
    //cout<<'Y';

    func(v);
    //cout<<'Y';
    for(auto x:v){
        cout<<x;
    }
    //cout<<'Y';

    return 0;
}
