// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
 //*******NAIVE SOLUTION ***********
 
 // TIME COMPLEXITY O(N)
 // SPACE IS O(1)....
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i=0; i<n; i++) {
            if(a[i] == 0) {
                count0++;
            }
            if(a[i] == 1) {
                count1++;
            }
            if(a[i] == 2) {
                count2++;
            }
        }
        
        int indx = 0;
        
        while(count0 != 0) {
            a[indx] = 0;
            indx++;
            count0--;
        }
        while(count1 != 0) {
            a[indx] = 1;
            indx++;
            count1--;
        }
        while(count2 != 0) {
            a[indx] = 2;
            indx++;
            count2--;
        }
       
    }
    
};



// OPTAMIZED APPROACH USING ONE TRAVERSAL ....


// time complexity O(N).. 
// space O(1)....
void sort012(int a[], int n)
    {
        // coode here 
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high) {
            if(a[mid] == 0) {
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 1) {
                mid++;
            }
            else if(a[mid] == 2) {
                swap(a[mid],a[high]);
                high--;
            }
        }
       
    }
    





// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
