// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

//*********NAIVE SOLUTION*********//

class Solution{ ///
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n = r+1;
        sort(arr,arr+n);
        
        return arr[k-1];
    }
};

//******OPTAMIZED SOLUTION*******//

// time complexity : O(n + k.log(n))...



int findKthSmallest(vector<int> const &input, int k)
{
    // base case
    if (input.size() < k) {
        exit(-1);
    }
 
    // create an empty min-heap and initialize it with all elements
    // `use std::greater` as the comparison function for min-heap
    priority_queue<int, vector<int>, greater<int>> pq(input.begin(), input.end());
 
    // pop from min-heap exactly `k-1` times
    while (--k) {
        pq.pop();
    }
 
    // return the root of min-heap
    return pq.top();
}




// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
