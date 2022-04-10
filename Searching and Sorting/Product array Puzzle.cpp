// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        // simple approach hai bhai
        // space O(n) le ;lia hai ...
        // iterate kia hai loop inside loop bhai 
        // time complexity O(N^2) he hai ..linear nhi hai ...
         vector<long long int> v;
       
       for(int i=0;i<n;i++){
       long long c = 1;    
           for(int j=0;j<n;j++){
               if(j!=i){
                   c=c*nums[j];
               }
           }
           v.push_back(c);
       }
       return v ;
        
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
