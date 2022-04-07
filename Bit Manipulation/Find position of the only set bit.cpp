// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        // time complexity for this is ...
        // over all [ Log N + Log N ] == [ Log N ].... auxxilary space is constant O(1)...most optamized solution ...
        if(N&1 == 0) { // constant work ...
            return -1;
        }
        
        int count  = 0;
        int x = N;
        while(x != 0) {   /// here [Log N] lag rhi hai 
            x = x & (x-1);
            count++;
        }
        if(count >=2 || count == 0) { // constant work again...
            return -1;
        }
       else {
            int num = N;
            int pos = 0;
            while(num != 0) {     // again we are doing [Log N] work ...
                if(num & 1 == 1) {
                    pos++;
                    return pos;
                }
                pos++;
                num = num >> 1;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
