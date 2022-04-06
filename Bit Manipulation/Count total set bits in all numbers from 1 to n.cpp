// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        //Naive approach 
        // having time complexity as (N log N)...
        int total_set_bits_from_1_to_n = 0;
        for(int i=1; i<=n; i++) {
            int saperate_set_bits_in_numbers = 0;
            int k = i;
            while(k != 0 ) {
                k = k & (k - 1);
                saperate_set_bits_in_numbers++;
            }
            
            total_set_bits_from_1_to_n = total_set_bits_from_1_to_n + saperate_set_bits_in_numbers;
        }
        
       return total_set_bits_from_1_to_n; 
    }
    
    
    
    
    //  optamized approach...

    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    // first we find the gratest value of x which is less than or equal to n;
    
    
    //time complexity is O(log N)...
    
    
    int power_of_2(int n) {
        int x = 0;
        while((1<<x) <= n) {
            x++;
        }
        return x-1;
    }
    
   
    int countSetBits(int n)
    {
        // Your logic here
        //Naive approach 
        if( n == 0) return 0;
        
        int x = power_of_2(n);
        
        int total_set_bits_from_1_to_n = 0;
        
        int set_1 = (1 << (x-1)) * x ; // which is 2power(x-1) * x;
        
        int set_2 = n - (1<<x) + 1;   // which is from 2^x to N and it is N-2^x + 1;
        
        int remaining_bits =  n-(1<<x);
        
        total_set_bits_from_1_to_n = set_1 + set_2 + countSetBits(remaining_bits);
        
       return total_set_bits_from_1_to_n ; 
    }
    
 
    
    
};



// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
