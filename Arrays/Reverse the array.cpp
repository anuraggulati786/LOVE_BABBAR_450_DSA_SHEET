#include <iostream>
using namespace std;
int main() {
//code
int testCases = 0;
   cin>>testCases;
   
   while(testCases>0)
   {
       int arrLen = 0;
       cin>> arrLen;
       int arr[arrLen];
       
       for(int i=0; i<arrLen; i++)
       {
           cin>>arr[i];
       }
       
       for(int i=arrLen-1; i>=0; i--)
       {
           cout<<arr[i]<<" ";
       }
       
       cout<<endl;
       testCases--;
   }
return 0;
}
