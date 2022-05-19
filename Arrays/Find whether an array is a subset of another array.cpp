// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends



// NAVIVE SOILUTI 

// TIME : O(M*N)...
// SPACE : O(1)...
///
int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }

        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == m)
            return 0;
    }

    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;

///

// OPTAMIZED 
// TIME : O(M+N)...
// SPACE : O(M+N)....

string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_set<int> set1;
    for(int i=0; i<n; i++) {
        set1.insert(a1[i]);
    }
    
    int siz = set1.size();
    
    for(int i=0; i<m; i++ ){
        set1.insert(a2[i]);
    }
    int siz2 = set1.size();
    
    if(siz == siz2) {
        return "Yes";
    }
    else {
        return "No";
    }
    
    
}
