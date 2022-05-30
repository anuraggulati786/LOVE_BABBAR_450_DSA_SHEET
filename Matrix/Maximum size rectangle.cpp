// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int func(vector<int>& h) {
       int n=h.size(),m=0;
       stack<int> s;
       h.push_back(INT_MIN);
       vector<int> a(n+1,0);
       for(int i=0;i<=n;i++){
           while(!s.empty() and h[s.top()]>=h[i]){
               if(h[s.top()]>h[i]){
                   int b=a[s.top()],c=i-1;
                   m=max(m,(c-b+1)*h[s.top()]);
               }
               s.pop();
           }
           if(!s.empty()) a[i]=s.top()+1;
           s.push(i);
       }
       return m;
   }
   int maxArea(int mat[MAX][MAX], int r, int c) {
       // Your code here
       int m=0;
       vector<int> v(c,0);
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               if(mat[i][j]) v[j]++;
               else v[j]=0;
           }
           m=max(m,func(v));
       }
       return m;
   }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends
