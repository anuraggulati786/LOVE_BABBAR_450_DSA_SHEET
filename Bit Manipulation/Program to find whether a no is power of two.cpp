// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    //optamized hai bhai ....
    bool isPowerofTwo(long long n){
        
        // Your code here    
        
        long long int  x  = n;
        int count  = 0;
        while(x != 0) {  /// brian karningham hai ye log n mai kam karegi bas OVER ALL TC IS O(LOG N).....
            x = x & (x-1);
            
            count++;
        }
        if(count == 1) {
            return true;
        }
        else {
            return false;
        }
    }
};

// { Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  // } Driver Code Ends
