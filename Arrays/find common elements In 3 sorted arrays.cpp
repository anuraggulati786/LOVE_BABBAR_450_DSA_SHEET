// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 //**************NAIVE SOLUTION***********************//
 
 // TIME : O(N^2)...
 
 
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>res;
            for(int i=0; i<n1; i++) {
                int count = 0;
                for(int j = 0; j<n2; j++) {
                    if(A[i] == B[j]) {
                        count++;
                        break;
                    }
                }
                if(count == 0) {
                    continue;
                }
                else {
                    int c2 = count;
                    for(int k=0; k<n3; k++) {
                        if(A[i] == C[k]) {
                            c2++;
                            break;
                        }
                    }
                    
                    if(c2 > count) {
                        res.push_back(A[i]);
                    }
                }
            }
            res.erase(unique(res.begin(),res.end()),res.end());
            return res;
            
        }

};


// optamized solution 

// time  : O(n1+n2+n3)...
// space : O(n1+n2+n3)...

 public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> res;
            
            unordered_set<int> arr1;
            for(int i=0; i<n1; i++) {
                arr1.insert(A[i]);
            }
            
            int p=0;
            for(auto it: arr1) {
                A[p] = it;
                p++;
            }
            
            unordered_set<int> arr2;
            for(int i=0; i<n2; i++) {
                arr2.insert(B[i]);
            }
            int q=0;
            for(auto it: arr2) {
                B[q] = it;
                q++;
            }
            
            unordered_set<int> arr3;
            for(int i=0; i<n3; i++) {
                arr3.insert(C[i]);
            }
            int r=0;
            for(auto it: arr3) {
                C[r] = it;
                r++;
            }
            
            unordered_map<int,int> map;
            for(int i=0; i<p; i++) {
                map[A[i]]++;
            }
            
            for(int i=0; i<q; i++) {
                map[B[i]]++;
            }
            
            for(int i=0; i<r; i++) {
                map[C[i]]++;
            }
            
            for(auto it : map) {
                if(it.second == 3) {
                    res.push_back(it.first);
                }
            }
            sort(res.begin(),res.end());
            return res;
            
        } 







// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
