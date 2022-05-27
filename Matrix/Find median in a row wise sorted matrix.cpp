// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
const int MAX = 100;
class Solution{   
public:
     int solve(vector<int>A,int index)
    {   
        int count=0;
        
        count+=(upper_bound(A.begin(),A.end(),index)-A.begin());
    
        return count;
        
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        int high=2000;
        int low=1;
        int median=(r*c)/2;
        while(low<=high)
        {
            int cnt=0;
            int mid=(high+low)/2;
            for(int i=0;i<r;i++)
            {
                cnt+=solve(matrix[i],mid);
            }
            if(cnt<=median)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
