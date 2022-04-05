// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // naive method...
	int setBits(int N) {
        // Write Your Code here
        // time complexity is = O(N)...
        int n  = 0;
        while(N != 0) {
            if(N&1 == 1) {
                n++;
            }
            
            N = N>>1;
        }
        return n;
    }
    // Brian Kernighan’s Algorithm: (OPTAMIZED APPROACH)...
    int setBits(int N) {
        // Write Your Code here
        // time complexity of this solution is O(log N)...and constant auxillary space... 
        int n  = 0;
        while(N != 0) {
            N = N&(N-1);
            n++;
        }
        return n;
    }
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
