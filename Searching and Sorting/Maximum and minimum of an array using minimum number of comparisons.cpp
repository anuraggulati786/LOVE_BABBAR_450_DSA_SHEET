// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  // optamized constant time complexity solution O(1)....
    int middle(int a, int b, int c){
        //code here//Position this line where user code will be pasted.
         if((a>b and a<c) or (a>c and a<b)){
           return a;
       }
       else if((b>a and b<c) or (b>c and b<a)){
           return b;
       }
       else if((c>a and c<b) or (c>b and c<a)){
           return c;
       }
    }
    
    
    // optamized approach O(N log N)...
    
     vector<int> res ;
         res.push_back(a);
         res.push_back(b);
         res.push_back(c);
         sort(res.begin(),res.end());
         return res[1];
    
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends
