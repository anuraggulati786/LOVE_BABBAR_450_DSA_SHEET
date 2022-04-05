// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here...
        // time complexity of this solution is O(N lon N) + O(N)... is nearly equal to = N(log N + 1) == [N(log N)]
        vector<int> res;
        sort(nums.begin(),nums.end()); // sort...
        for(int i=0; i<nums.size(); i++) { // linear loop...
            if(nums[i] != nums[i+1]) {
                res.push_back(nums[i]);
            }
            else {
                i = i+1;
            }
        }
        return res;
    }
    
    
    
    
    
    
   
   // optamized approach... O(N)...
    
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> res;
        int Xor = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            Xor = Xor ^ nums[i];
        }
        
        int set_bit = Xor & ~(Xor-1);
        
        int x = 0, y = 0;
        
        for(int i=0; i<n; i++) {
            if(nums[i] & set_bit) {
                x = x ^ nums[i];
            }
            
            else {
            y = y ^ nums[i];
        }
            
        }
        
        
        res.push_back(x);
        res.push_back(y);
        
        sort(res.begin(),res.end());
        return res;
    }
};
    
    
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
