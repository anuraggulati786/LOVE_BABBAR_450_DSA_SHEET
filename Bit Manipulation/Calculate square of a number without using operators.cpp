// Simple solution to calculate square without
// using * and pow()
#include <iostream>
using namespace std;

int square(int num)
{
	// handle negative input
	
	// intution is that 
	//  num = num * num right ;
	/// num = num * (binary of num )
	/// num = num * (in decimal binary can be written as 2^ 2+ 2^1+ 2^0 for set bits present in the number ) right..
	// num can also be written as = num * 2^2 + num * 2^1 + num * 2^0 right ...
	// or    num << 2 + num << 1 + num << 0 ...
	
	
	
	
	if (num < 0)
		num = -num;

	// Initialize power of 2 and result
	int power = 0, result = 0;
	int temp = num;

	while (temp != 0) {
		if (temp & 1) {
			// result=result+(num*(2^power))
			result = result + (num << power);
		}
		power++;

		// temp=temp/2
		temp = temp >> 1;
	}

	return result;
}

// Driver code
int main()
{
	// Function calls
	for (int n = 10; n <= 15; ++n)
		cout << "n = " << n << ", n^2 = " << square(n)
			<< endl;
	return 0;
}

// This code is contributed by Aditya Verma

