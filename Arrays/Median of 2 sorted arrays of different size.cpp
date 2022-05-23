// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        // time : O((N1+N2) log (N1+N2))...
    vector<int> m;
       
        m.insert(m.begin(), array1.begin(), array1.end());
        m.insert(m.end(), array2.begin(), array2.end());
        
        sort(m.begin(),m.end());
        
        return (m[m.size()/2]+m[(m.size()-1)/2])/2.00;
    }
    
    
    // optamized approace 
    // timne : O(min(log m,log n)) 


    // space : O(1)...
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
   {
       // Your code goes here
       int m=nums1.size(),n=nums2.size();
       if(n<m) return MedianOfArrays(nums2,nums1);
       int s=0,l=m;
       while(s<=l){
           int cut1=(s+l)/2;
           int cut2=(n+m+1)/2-cut1;
           int l1=(cut1==0) ? INT_MIN : nums1[cut1-1];
           int l2=(cut2==0) ? INT_MIN : nums2[cut2-1];
           int r1=(cut1==m) ? INT_MAX : nums1[cut1];
           int r2=(cut2==n) ? INT_MAX : nums2[cut2];
           if(l1<=r2 and l2<=r1){
               if((n+m)%2) return max(l1,l2);
               return (double)(max(l1,l2)+min(r1,r2))/2;
           }
           else if(l1 > r2) l=cut1-1;
           else s=cut1+1;
       }
       return 0.0;
   }O(min(log m,log n)) (Time Taken : 0.14)


};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
