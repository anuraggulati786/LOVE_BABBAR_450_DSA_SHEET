// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:


//****************************NAIVE SOLUTION 


	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long int res = INT_MIN;
	    for(int i=0; i<n; i++) {
	        long long int curr_multiplication  =  arr[i];
	        
	        for(int j = i+1; j<n; j++) {
	            res = max(res,curr_multiplication);
	            curr_multiplication = curr_multiplication * arr[j];
	        }
	        res = max(res,curr_multiplication);
	    }
	    
	    return res;
	}









//****************************OPTAMIZED APPROACH ************************

// time O(N)......
// space O(1)...........
	// Function to find maximum product subarray
 // Function to find maximum product subarray
long long maxProduct(vector<int> arr, int n) {
    // If array only contains one element, return the element
    if(n==1)
        return arr[0];
    
    long long maxProd = 1; //for maintaining the maximum product
    long long prod = 1; //for calculating the product at each element during traversal
    
    // For loop to calc the max prod from subarray including the first element
    for(int i=0;i<n;i++){
        prod *= arr[i];
        maxProd = max(maxProd, prod);
        if(arr[i] == 0){
            prod = 1;
        }
    }
    
    // For loop to calc the max prod from subarray including the last element
    prod = 1;
    for(int i=n-1;i>=0;i--){
        prod*=arr[i];
        maxProd = max(maxProd,prod);
        if(arr[i] == 0){
            prod = 1;
        }
    }
    
    return maxProd;
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
