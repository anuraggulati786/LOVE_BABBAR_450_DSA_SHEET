// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
//  Time Complexity:  O(m*n)

//   Space Complexity:  O(1)

// naive solution :-> 

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans_row = -1;
	    int max_one = 0;
	    for(int row = 0; row<= n-1; row++) {
	        int curr_one = 0;
	        for(int col = 0; col<= m-1; col++) {
	            if(arr[row][col] == 1) {
	                curr_one++;
	            }
	        }
	        if(curr_one > max_one) {
	            max_one = curr_one;
	            ans_row = row;
	        }
	        
	    }
	    return ans_row;
	}

};







// optamized solution ********************
// time : O(R+C)....
// binar search used :))

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int r = 0;
	    int c = m -1 ;
	    int max_row_indx = -1;
	    while(r<n && c>=0) {
	       
	        if(arr[r][c] == 1) {
	            max_row_indx = r;
	            c--;
	        }
	        else {
	            r++;
	        }
	    }

	    return max_row_indx;
	    
	}

};





// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
