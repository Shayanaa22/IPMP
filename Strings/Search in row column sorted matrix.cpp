#include<bits/stdc++.h>
using namespace std;

#define condn (r>=0 && r<n && c>=0 &&c<n)

int main(){
    int n=4;
    int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    int x=29;

    int r=0;
    int c=n-1;

    while(condn){
        if(x>mat[r][c]){r++;}
        else if(x<mat[r][c]){c--;}
        else{
            printf("(%d,%d)",r,c);
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
