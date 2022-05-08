
// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;


// naive approach : time : O(n) space O(n)..
void rearrange(int arr[], int n)
{
	
	int indx = 0;
	int temp[n];
	for(int i=0; i<n; i++) {
		if(arr[i] < 0) {
			temp[indx] = arr[i];
			indx++;
		}
	}
	for(int i=0; i<n; i++) {
		if(arr[i] > 0) {
			temp[indx] = arr[i];
			indx++;
		}
	}
	
	for(int i=0; i<n; i++) {
		arr[i] = temp[i];
	}
	
	
	
	
}

// optamized 
// time O(N)...
// space O(1)...
int low =0,high = n-1;
      while(low<high){
      if(arr[low]<0){
          low++;
      }else if(arr[high]>0){
          high--;
      }else{
        swap(arr[low],arr[high]);
      }
      
      // 2nd way 
      
    int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
	
	







// A utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

// Driver code
int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}
      
