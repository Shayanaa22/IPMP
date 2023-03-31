//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	int findMaximum(int arr[], int n) {
	   int l=0,r=n-1;

	   while(l<=r){
	       int m=l+ (r-l)/2;
	       if(arr[m]>arr[m+1] && arr[m]<arr[m-1]){
	           r=m-1;
	       }
	       else if(arr[m]>arr[m-1] && arr[m]<arr[m+1]){
	           l=m+1;
	       }
	       else{return arr[m];}

	   }

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
