#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int i,p,j;
   vector<int>v1,v2;
   
   for(i=0;i<n;i++){
       
       if(arr[i]>=0){
           v1.push_back(arr[i]);
       }
       else{
           v2.push_back(arr[i]);
       }
       
   }
    
    p=0;
    i=0;
    j=0;
    while(i<v1.size()&&j<v2.size()){
        
        arr[p++]=v1[i++];
        
        arr[p++]=v2[j++];
        
        
    }
    
    while(i<v1.size()){
        arr[p++]=v1[i++];
        
    }
    
    while(j<v2.size()){
        arr[p++]=v2[j++];
        
    }
   
	    
	}
};

// { Driver Code Starts.

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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
