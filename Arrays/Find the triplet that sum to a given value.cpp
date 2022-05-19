// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.


// naive solution ...

//time : O(N^3)...
// space : O(1).....


        bool find3Numbers(int A[], int arr_size, int sum)
{
    // Fix the first element as A[i]
    for (int i = 0; i < arr_size - 2; i++)
    {
 
        // Fix the second element as A[j]
        for (int j = i + 1; j < arr_size - 1; j++)
        {
 
            // Now look for the third number
            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    return true;
                }
            }
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
}






// optamized in time : O(N^2)...
// space O(N).../.


   bool find3Numbers(int A[], int arr_size, int sum)
{
    // Fix the first element as A[i]
    for (int i = 0; i < arr_size - 2; i++)
    {
 
        // Find pair in subarray A[i+1..n-1]
        // with sum equal to sum - A[i]
        unordered_set<int> s;
        int curr_sum = sum - A[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
               
                return true;
            }
            s.insert(A[j]);
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
}



//******MOST OPTAMIZED IN  TIME : O(N^2)....
// spacve O(1).....
     bool find3Numbers(int A[], int n, int sum)
{
    int l, r;
    /* Sort the elements */
    sort(A, A + n);
    /* Now fix the first element one by one and find the
       other two elements */
    for (int i = 0; i < n - 2; i++) {
 
        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        l = i + 1; // index of the first element in the
        // remaining elements
        r = n - 1; // index of the last element
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
    // If we reach here, then no triplet was found
    return false;
}

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
