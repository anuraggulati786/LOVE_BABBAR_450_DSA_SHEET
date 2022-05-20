// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
//*****************NAIVE APPROACH*****************//
    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int mi = INT_MAX;
        for(int i=0; i<n; i++){
            int s = 0;
            for(int j=i; j<n; j++) {
                s = s + arr[j];
                if(s > x) {
                    mi = min(mi , j-i+1);
                }
            }
        }
        return mi;
    }
};


//**********OPTAMIZED SOLUTION*****************//

//*****************OPTAMIZED APPROACH*****************//
    int smallestSubWithSum(int arr[], int n, int x)
    { 
        //**time : O(N)...
        // space O(1)....
        
        // Your code goes here   
        int mi = INT_MAX;
        int i=0,j=0;
        int s = 0;
        while(i<=j && j<n) {
            while(s<=x && j<n) {
                s = s + arr[j] ;
                j++;
            }
            while(s>x && i<j) {
                mi = min(mi,j-i);
                s = s - arr[i];
                i++;
            }
        }
        return mi;
    }







// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
