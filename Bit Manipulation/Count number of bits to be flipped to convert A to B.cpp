// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
     // naive approach 
     
     
     // time complexity is O(N) + O(M)...
     // here M and N are length of a and b respectively in binary...overall TC is O(M+N)...
     int bits_to_be_flip = 0;
     while(a != 0 || b !=0) {
         int c1 = 0;
         int c2 = 0;
          
         if(a & 1 == 1) c1++;
         if(b & 1 == 1) c2++;
         
         if(c1 != c2) {
             bits_to_be_flip++;
         }
         
         a = a >> 1;
         b = b >> 1;
         
     }
        
      return bits_to_be_flip;  
    }
    
    
    
    
    
    // optamized solution.....
    
    int countBitsFlip(int a, int b){
        // over all TC is O(log N)...
        // Your logic here
        // first find the xor of both a and b ..
        int Xor  = 0;
        Xor  = a^b;
        
        // then find num,ber of set bits in it using brian karningham algo...
        int count = 0;
        while(Xor != 0) {
            Xor = Xor &(Xor - 1);
            count++;
        }
        return count ;
    }
    
   
    
    
    
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
