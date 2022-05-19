// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
   
   //*********NAIVE APPROACH **************
   
   
   
   int findLongestConseqSubseq(int a[], int N)
   {
       set<int> s;
       int count=0,max=0;
       sort(a,a+N);
       for(int i=0;i<N;i++)
       {
           if(a[i+1]-a[i]==1)
           {
               ++count; 
           }
           else if(a[i+1]-a[i]==0)
           {
               
           }
           else
           {
               if(max<count)
               {
                   max=count;
               }
               count=0;
           }
       }
        
       return max+1;
   }
   
   
   
   
   
   
   
   //(******************************OPTAMIZED APPROACH )*******************
   
   
   
   
   
   
   
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
   int findLongestConseqSubseq(int arr[], int n)
   {
       unordered_set<int> S;
    int ans = 0;

    // Hash all the array elements
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);

    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < n; i++)
    {
        // if current element is the starting
        // element of a sequence
        if (S.find(arr[i] - 1) == S.end())
        {
            // Then check for next elements
            // in the sequence
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;

            // update  optimal length if
            // this length is more
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
   }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
