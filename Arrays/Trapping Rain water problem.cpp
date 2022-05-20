// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;






class Solution{

    // Function to find the trapped water between the blocks.
    public:
    
    // *************** naive approach ********************
    // time : O(N^2)....
    // space : O(1)....
    
    long long trappingWater(int arr[], int n){
        // code here
        int maximum_water_trap = 0;
        
        // since we know at 1st block and at last block no water will trap...
        for(int i=1; i<=n-2; i++) {
            
            int left_side_maximum_hieght_block = arr[i];
            for(int j = 0; j<i; j++) {
                left_side_maximum_hieght_block = max(left_side_maximum_hieght_block,arr[j]);
            }
            
            
            int right_side_maximum_hieght_block = arr[i];
            for(int k = i+1; k<n; k++) {
                right_side_maximum_hieght_block = max(right_side_maximum_hieght_block,arr[k]);
            }
            
            maximum_water_trap = maximum_water_trap + min(left_side_maximum_hieght_block,right_side_maximum_hieght_block) - arr[i];
            
        }
        
        return maximum_water_trap;

    }
};



class Solution{

    // Function to find the trapped water between the blocks.
    public:
    
    // *************** optamize approach ********************
    // time : O(N)....
    // space : O(N)....
    
    long long trappingWater(int arr[], int n){
        // code here
        long long  maximum_water_trap = 0;
        
        // since we know at 1st block and at last block no water will trap...
        int left_max_height[n];
        left_max_height[0] = arr[0];
        for(int i=1; i<n; i++) {
            left_max_height[i] = max(left_max_height[i-1],arr[i]);
        }
        //left_max_height[n] = {3,3,3,3,3,4}
        
        int right_max_height[n];
        right_max_height[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--) {
            right_max_height[i] = max(right_max_height[i+1],arr[i]);
        }
        
        // right_max_height[n] = {4,4,4,4,4,4}
        //left_max_height[n]   = {3,3,3,3,3,4}
        //arr[]                = {3,0,0,2,0,4}
        
        for(int i=0; i<n; i++) {
            maximum_water_trap = maximum_water_trap + min(left_max_height[i],right_max_height[i]) - arr[i];
        }
        
        return maximum_water_trap;

    }
};






// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
