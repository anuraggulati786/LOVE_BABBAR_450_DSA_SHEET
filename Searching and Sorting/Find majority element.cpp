// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        
        
        
         //optamized  approach O(n)... using moores voting algorithm...
    int count = 1, res = 0;
    for(int i=1; i<n; i++) {
        if(arr[res] == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        
        if(count == 0) {
            count = 1;
            res = i;
        }
    }
    count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[res]) {
            count++;
        }
    }
     if(count > n/2) {
         return res;
     }   
     else {
         return -1;
     }
        
    }
        
     
        
        
        
        
        // your code here
        // your code here
      //optamized  approach O(n)... using moores voting algorithm...
    int count = 1, res = arr[0];
    for(int i=1; i<n; i++) {
        if(res == arr[i]) {
            count++;
        }
        else {
            count--;
        }
        
        if(count == 0) {
            count = 1;
            res = arr[i];
        }
    }
    int c = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == res) {
            c++;
        }
    }
     if(c > n/2) {
         return res;
     }   
     else {
         return -1;
     }
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
