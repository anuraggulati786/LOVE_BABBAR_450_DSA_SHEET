// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int N , int L , int R) {
        // code here
    // time complexity for this solution is O(R)... can be optamized more but this is also a good approach to solve........ 
        int mask;
        
        for(int i = L; i<= R; i++) {
            mask = 1<<i-1;
            N = N | mask;
        }
        return N;
    }
    
    
    int setAllRangeBits(int N , int l , int r) {
        // code here
     // time complexity for this solution is O(1)...
        int mask = (((1 << (l - 1)) - 1) ^((1 << (r)) - 1));

        N = N | mask;
        return N;
    }
    
    
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends
