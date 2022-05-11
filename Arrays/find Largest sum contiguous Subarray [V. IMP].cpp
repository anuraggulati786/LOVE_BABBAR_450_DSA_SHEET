#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 
 
 
 
 
 
 
 
 
 
 // naive solution 
 // time  : O(N^2)...
 // space : O(1)...
 
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
       long long int maxi = 0;
       for(int i=0; i<n; i++) {
           
           int curr_max = 0;
           for(int j = i; j<n; j++) {
               curr_max += arr[j];
               if(curr_max > maxi) {
                   maxi = curr_max;
               }
           }
           
       }
       if(maxi > 0) {
           return maxi;
       }
       else {
           return -1;
       }
    }
};










// optamized solution in O(N) time :
// space O(1)::-> 


 long long maxSubarraySum(int a[], int n){
        
      long long max_sum = a[0], curr_sum = a[0];
        
        //Iterating over the array.
        for(int i=1;i<n;i++) 
            {
                int t = (curr_sum+a[i]);
                
                curr_sum = max(a[i] , t);
                
                max_sum = max(max_sum,curr_sum);
                
                
            }
            
                return max_sum;
           
    }
    
    
    
    
    
    
    
    
    
    

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
