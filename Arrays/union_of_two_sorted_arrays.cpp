// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++


// ***********naive approach *********************//
//TIME : O(M+N)>>>>>>>
// space O(M)................. 

int NumberofElementsInUnion(int arr1[], int arr2[], int n, int m) {
        // Your code goes here
        
        vector<int> uni;
        int i=0;
        int j=0;
        while(i<m && j<n) {
        	if(arr1[i] < arr2[j]) {
        		uni.push_back(arr1[i]);
        		i++;
			}
			else if(arr2[j] < arr1[i]) {
				uni.push_back(arr2[j]);
				j++;
			}
			else {
				uni.push_back(arr1[i]);
				i++;
				j++;
			}
		}
		
		while(i<m) {
			uni.push_back(arr1[i]);
			i++;
		}
		
		while(j<n) {
			uni.push_back(arr2[j]);
			j++;
		}
		
		return uni.size();
        
   }




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
