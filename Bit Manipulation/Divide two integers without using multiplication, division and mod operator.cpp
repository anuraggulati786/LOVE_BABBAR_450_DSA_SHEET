// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        // time complexity of this solution is [ O(dividend / divisor) ]...
        // we decide the sign of the result first ...
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
 
  // Update both divisor and
  // dividend positive
  dividend = abs(dividend);
  divisor = abs(divisor);
 
  // Initialize the quotient
  int quotient = 0;
  while (dividend >= divisor) {
    dividend -= divisor;
    ++quotient;
  }
  
  // Return the value of quotient with the appropriate sign.
  return quotient * sign;
        
    }
    
    
    
    
    // OPTAMIZED Approach ... O( Log n ) Time Complexity....
    
     int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
 
  // remove sign of operands
  dividend = abs(dividend);
  divisor = abs(divisor);
 
  // Initialize the quotient
  long long quotient = 0, temp = 0;
 
  for (int i = 31; i >= 0; --i) {
 
    if (temp + (divisor << i) <= dividend) {
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }
  //if the sign value computed earlier is -1 then negate the value of quotient
  if(sign==-1) quotient=-quotient;
   
  return quotient;
    
    
    
    
    
    
    
    
    
    
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}
  // } Driver Code Ends
