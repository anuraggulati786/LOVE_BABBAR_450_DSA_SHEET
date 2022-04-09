// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> arr, int K) {
    //code here
    int n = arr.size();
    int s = 0;
    int e = n-1;
    
    while(s <= e) {
        int mid = s+ (e-s)/2;
        
        if(arr[mid] == K) {
            return mid;
        }
        
        else if(arr[mid] > arr[s]) {
            
            if(K>= arr[s] && K < arr[mid]) {
                e = mid -1;
            }
            else {
                s = mid + 1;
            }
        }
        else {
            if(K>arr[mid] && K <= arr[e]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        
    }
    return -1;
}
