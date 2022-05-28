class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
     int n = mat.size();
      for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			swap(mat[i][j], mat[j][i]);
			
	for(int i = 0; i < n; i++)                // time O(N^2)....
	                                          // space constant O(1)....
	                                          
	{
	    int low = 0, high = n - 1;
	    
	    while(low < high)
	    {
	        swap(mat[i][low], mat[i][high]);
	        
	        low++;
	        high--;
	    }
	}
        
    }
};
