// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//      Expected Time Complexity: O(logN)
//      Expected Auxiliary Space: O(1).

// most optamized approach.....

int find_left_most_element(int arr[] , int n, int key) {
	
	int s = 0, e = n-1; 
	while(s <= e) {
	
	int mid = s + (e-s)/2;
	
	if(arr[mid] > key) {
		e = mid - 1;
	}
	else if(arr[mid] < key) {
		s = mid + 1;
	}
	
	else {
		
		if(mid == 0 || arr[mid] != arr[mid-1]) {
			return mid;
		}
		
		else {
			e = mid - 1;
		}
		
	}
}

	return -1;
}

int find_right_most_element(int arr[] , int n, int key) {
	
	int s = 0, e = n-1; 
	while(s <= e) {
	
	int mid = s + (e-s)/2;
	
	if(arr[mid] > key) {
		e = mid - 1;
	}
	else if(arr[mid] < key) {
		s = mid + 1;
	}
	
	else {
		
		if(mid == n-1 || arr[mid] != arr[mid+1]) {
			return mid;
		}
		
		else {
			s = mid + 1;
		}
		
	}
}

	return -1;
}





vector<int> find(int arr[], int n , int x )
{

    // code here
    vector<int> res;
    int first = find_left_most_element(arr,n,x);
    int last = find_right_most_element(arr,n,x);
    res.push_back(first);
    res.push_back(last);
    return res;
}



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends
