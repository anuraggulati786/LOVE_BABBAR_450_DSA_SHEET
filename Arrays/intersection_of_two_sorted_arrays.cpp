// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++


// ***********naive approach *********************//
// time : O(M*N)...
// space : O(1)....
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
       int intersection_count = 0;
       for(int i=0; i<n; i++) {
           for(int j=0; j<m; j++) {
           	if(a[i] == b[j]) {
           		intersection_count++;
           		b[j] = -123;
           		break;
			   }
		   }
        }
       
       return intersection_count;
        
    }


//*************OPTAMIZED APPROACH:: /////////////

//TIME : O(M+N)>>>>>>>
// space O(1)................. 

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int arr1[], int arr2[], int n, int m) {
        // Your code goes here
        int intersection = 0;
        int i=0;
        int j=0;
        while(i<m && j<n) {
        	if(arr1[i] < arr2[j]) {
        		intersection++;
        		i++;
			}
			else if(arr2[j] < arr1[i]) {
				intersection++;
				j++;
			}
			else {
				intersection++;
				i++;
				j++;
			}
		}
		return intersection;
    }
};





// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends
