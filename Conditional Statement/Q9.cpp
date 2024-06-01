//perfect number

// You are given an positive integer n. You have to check whether a number is perfect or not.

// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number. Try to use do while loop for completing the task.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// The value of n lies in the range: [1, 500]
// Time Limit: 1 second 
// Sample Input 1:
// 6
// Sample Output 1:
// 6 is a perfect number
// Sample Input 2:
// 23
// Sample Output 2:
// 23 is not a perfect number

#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int i=1,sum=0;
     do{
       if (n % i == 0) {
         sum = sum + i;
       }
       i++;
     } while (i < n) ;
       if (sum == n) {
         cout <<n<<" is a perfect number";

       } else {
         cout <<n<< " is not a perfect number";
       }
     
     
}