class Solution {
public:
	// time: O(N)..
	
    int maxProfit(vector<int>& arr) {
     int max_profit = 0;
        int min_val_day = arr[0];
        for(int i=1; i<arr.size(); i++) {
            min_val_day = min (min_val_day, arr[i]);
            max_profit = max(max_profit,arr[i] - min_val_day);
        }
        return max_profit;
    }
};
