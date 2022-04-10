// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    // time complexity for this solution is O(N^3)...
	    // this gave TLE bro.... bekar hai time complexity or optamize karo bhai..........
	    int count = 0;
	    for(int i=0; i<n-2; i++) {
	        for(int j=i+1; j<n-1; j++) {
	            for(int k=j+1; k<n; k++) {
	                if((arr[i] + arr[j] + arr[k]) < sum) {
	                    count++;
	                }
	            }
	        }
	    }
	    
	    
	   return count; 
	    
	}
		 

};




//***************************OPTAMIZED SOLUTION **************

class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    // time complexity is O(N Log N + N^2)...........
	sort(arr, arr+n);
 
    // Initialize result
    int ans = 0;
 
    // Every iteration of loop counts triplet with
    // first element as arr[i].
    for (int i = 0; i < n - 2; i++)
    {
        // Initialize other two elements as corner elements
        // of subarray arr[j+1..k]
        int j = i + 1, k = n - 1;
 // we uses two pointer approach inside i loop...
 
        while (j < k)
        {
            // If sum of current triplet is more or equal,
            // move right corner to look for smaller values
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;
 
            // Else move left corner
            else
            {
                // This is important. For current i and j, there
                // can be total k-j third elements.
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
	    
	}
		 

}













// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
