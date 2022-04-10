// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    // naive approach time complexity O(N^2)....
    int ans = 0;
    for(int i=0 ;i<n; i++) {
        int diff = 0;
        for(int j=i+1; j<n; j++) {
            diff = abs(arr[i] - arr[j]);
            if(diff == n) {
                return true;
            }
        }
    }
    
    return -1;
    
    
    // )))))))))))))))))))))))))))))))))))))))))) OR (((((((((((((((((((((((((((((((((((
    
     int ans = 0;
    for(int i=0 ;i<n; i++) {
        int diff = arr[i] + n;
        for(int j=0; j<n; j++) {
            if(diff == arr[j]) {
                return true;
            }
        }
    }
    
    return -1;
    
    
    
    
}


//*****************************************************


// optamized approach........

// time complexity O(NlogN)............
bool findPair(int arr[], int size, int n){
    //code
    
   sort(arr,arr+size);
    
    int low=0;
    int high=1;
    
    while(low<size && high<size)
    {
        if(abs(arr[high]-arr[low])==n && low!=high)
            return true;
        else if((arr[high]-arr[low])<n)
            high++;
        else 
            low++;
    }
    return false;
}
















