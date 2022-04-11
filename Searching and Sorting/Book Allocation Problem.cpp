// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    

 int isvalid(int A[],int N,int M,int mid)
   {
       int sum=0;
       int count=0;
       for(int i=0;i<N;i++)
       {
           if(A[i]>mid)
           return 0;
           else
           {
               sum+=A[i];
               if(sum>mid)
               {
			   sum=0;
               sum=A[i];
               count++;
               }
         }
           }
       if(sum<=mid)
       count++;
       
       if(count<=M)
       return 1;
       return 0;
       
       
   }
   int findPages(int A[], int N, int M) 
   {
       //code here
       // time complexity for this solution is O(N log N)...
       long long ans=INT_MAX;
       long long int l=0,h=0;
       for(int i=0;i<N;i++)
       h+=A[i];
       while(l<=h)
       {
           long long mid=h-((h-l)/2);
           if(isvalid(A,N,M,mid))
           {
               if(mid<ans)
               ans=mid;
               h=mid-1;
               
           }
           else
           l=mid+1;
           
       }
       return ans;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends
