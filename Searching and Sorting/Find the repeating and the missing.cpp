// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
     int *findTwoElement(int *arr, int n) {
     // code here
     // using space...
     // intution is first we make an frequency array of size N...
     // time complexity of the solution is ...O(N)...
     // space comepexity is also ....O(N).....
     
     // make a frequency array and mark all the position one by one by visiting in main array... if frequency is == 2 then that is out repeating element .. and if frequency is 0 then the element is not present....
     int freq[n + 1] = {0};
     int missing_num = 0;
     int repeating_num = 0;
     int ans[2];  
     for(int i = 0; i<n; i++) {
         freq[arr[i] - 1]++;
     }
     
     for(int i=0; i<n; i++) {
         if(freq[i] == 0) {
             missing_num = i;
         }
         
         if(freq[i] == 2) {
            repeating_num = i; 
         }
     }
    ans[0] = repeating_num + 1;
    ans[1] = missing_num + 1;
    
    return ans;
    
    
    
   //******************************************************** 
    // optamized approach bro....
     int *findTwoElement(int *arr, int n) {
        // code here
     // using space...
     // Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
    // in this we are doing the changes in the main array present...
    int repeating_element = 0;
    int missing_element = 0;
    
    for(int i=0; i<n; i++) {
        if(arr[abs(arr[i]) - 1] < 0) {
            repeating_element = abs(arr[i]);
        }
        else {
            arr[abs(arr[i]) - 1] = -(arr[abs(arr[i]) - 1]);
        }
    }
    // now we traverse and see the positive element......in the array...
    // zero based indexing ki hai bhai yaha par is liye +1 kia hai bro...
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            missing_element = i + 1;
            break;
        }
    }
    
    
    int *v = new int[2];
    v[0] = repeating_element;
    v[1] = missing_element;
    return v;
     
     }
  
};

    
    
    
    
    
    
         
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
