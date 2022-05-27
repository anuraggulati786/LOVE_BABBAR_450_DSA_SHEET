// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
//

//*****************8NMAIVE SOLUTION 

//Time Complexity: O(N2log(N2))
// Auxiliary Space: O(N2)


class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
       vector<int> v;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) v.push_back(Mat[i][j]);
        sort(v.begin(), v.end());
        int c = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) Mat[i][j] = v[c++];
        return Mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends
