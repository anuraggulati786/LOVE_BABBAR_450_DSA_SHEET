// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n) {
 for(int i=0; i<n; i++) {
  int num = a[i];
  int rev = 0;
  
  //find the reverse of the num
  while(num > 0) {
   rev = rev*10 + num%10;
   num = num/10; 
  }
  if(rev != a[i]) {
   return 0;
  }
 }
 return 1;
}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
