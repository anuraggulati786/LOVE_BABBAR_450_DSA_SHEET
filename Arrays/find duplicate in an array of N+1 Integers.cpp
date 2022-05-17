// naive solution Time : O(N^2)......

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); i++) {
            bool flag  =false;
            for(int j=i+1;j<nums.size(); j++) {
                if(nums[i] == nums[j]) flag = true;
            }
            if(flag == true) res = nums[i];
        }
        return res;
    }
};





// optamized algorithm ...
// time O(N log N).....

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int ans = nums[0];
       sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                ans = nums[i]; 
            break;
            }
        }
        return ans;
    }
};


// using unordered_map without modifying the array...
// time O(N)..
// space O(N)...


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int ans = 0;
        unordered_map<int,int> map;
        for(int i=0; i<nums.size(); i++) {
            map[nums[i]]++;
        }
        
        for(auto it: map) {
            if(it.second >1) {
                ans  = it.first;
            }
        }
      
        return ans;
    }
};

// one more approach using a count array 
// time O(N)...
// space O(N).........


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      vector<int> cnt(nums.size(),0);
        int ind =  0;
		
		// store the cnt of each value in the cnt vector
        for(int i = 0; i<nums.size(); i++)
        {
            cnt[nums[i]]++;
        }
        
        for(int i = 0; i<cnt.size(); i++)
        {
			// if cnt[i] > 1
			// this means that element occur more than once in nums
			// we have to return i
            if(cnt[i] > 1)
            {
                ind  = i;
                break;
            }
        }
        
        return ind;
    }
};


// BINARY SEARCH APPROACH ......
// time O(N LOG N )...
// space O(1)....



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int low = 1;
    int high = nums.size()-1;
    int dup = -1;
    while(low <= high){
        int mid = (low+high)/2;
        int count = 0;
        for(int num : nums){
            if(num <= mid){
                count++;
            }
        }
        
        if(count > mid){
            dup = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return dup;
    }
};






