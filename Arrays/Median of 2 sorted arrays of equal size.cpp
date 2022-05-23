#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
//************NAIVE APPROACH *****************


//         time : O(N LOG N)...: n is size of temp array..(2*N)///
//         space : O(N+N) = O(2N) = O(N)...
int getMedian(int ar1[],int ar2[], int n)
{   

    int size = 2*n;
	vector<int> temp(size);
	int indx = 0;
	for(int i=0; i<n; i++) {
		temp[indx] = ar1[i];
		indx++;
	}
	
	for(int i=0; i<n; i++) {
		temp[indx+0] = ar2[i];
		indx++;
	}
	
	sort(temp.begin(),temp.end());
	
	int median = 0;
	median = temp[n-1] + temp[n];

	
	return ceil(median/2);
	
	
}


// optamized approach :.............

// time : O(NLogN)...

// space : O(1)...


int getMedian(int ar1[], int ar2[], int n)
{
	int j = 0;
	int i = n - 1;
	while (ar1[i] > ar2[j] && j < n && i > -1)
		swap(ar1[i--], ar2[j++]);
	sort(ar1, ar1 + n);
	sort(ar2, ar2 + n);
	return (ar1[n - 1] + ar2[0]) / 2;
}
// optamized approach :
// time : O(N)...
// space : O(1)...


int getMedian(int ar1[],
              int ar2[], int n)
{
    int i = 0; /* Current index of
                  i/p array ar1[] */
    int j = 0; /* Current index of
                  i/p array ar2[] */
    int count;
    int m1 = -1, m2 = -1;
 
    /* Since there are 2n elements,
    median will be average of elements
    at index n-1 and n in the array
    obtained after merging ar1 and ar2 */
    for (count = 0; count <= n; count++)
    {
        /* Below is to handle case where
           all elements of ar1[] are
           smaller than smallest(or first)
           element of ar2[]*/
       if (i == n)
        {
            m1 = m2;
            m2 = ar2[0];
            break;
        }
 
        /*Below is to handle case where
          all elements of ar2[] are
          smaller than smallest(or first)
          element of ar1[]*/
        if (j == n)
        {
            m1 = m2;
            m2 = ar1[0];
            break;
        }
    
        /* equals sign because if two
           arrays have some common elements */
        if (ar1[i] <= ar2[j])
        {
            /* Store the prev median */
            m1 = m2;
            m2 = ar1[i];
            i++;
        }
        else
        {
            /* Store the prev median */
            m1 = m2;
            m2 = ar2[j];
            j++;
        }
    }
 
    return (m1 + m2)/2;
}



// Driver Code
int main()
{
	int ar1[] = {1, 2, 3, 4, 5};
	int ar2[] = {6, 7, 8, 9, 10};

	int n1 = sizeof(ar1) / sizeof(ar1[0]);
	int n2 = sizeof(ar2) / sizeof(ar2[0]);
	if (n1 == n2)
		cout << "Median is "
			<< getMedian(ar1, ar2, n1) ;
	else
		cout << "Doesn't work for arrays"
			<< " of unequal size" ;
	getchar();
	return 0;
}


