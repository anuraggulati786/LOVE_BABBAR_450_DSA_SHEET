// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++



//**********naive approach ***********

// time   : O((M+N)*(M+N))
// space  : O(M+N) 

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       int temp[m+n];
       // copy elements of both arrya a and b....
       for(int i=0;i <n; i++) {
           temp[i] = a[i];
       }
       for(int i=0; i<m; i++) {
           temp[n+i] = b[i];
       }
       
       
       int distinct_elements = 0;
       
       for(int i=0; i<m+n; i++) {
           bool flag = false;
           for(int j=0; j<i; j++) {
               if(temp[j] == temp[i]) {
                   flag = true;
                   break;
               }
           }
           
           if(flag == false) {
               distinct_elements++;
           }
       }
       
       return distinct_elements;
       
    }
};






//******************** optamized approach ...************************ 
// using unordered_Set

// time : O(M+N)...
// space is :O(M+N)....
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;
        for(int i=0; i<n; i++) {
            set.insert(a[i]);
        }
        
        for(int i=0; i<m; i++) {
            set.insert(b[i]);
        }
         
        
        return set.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
