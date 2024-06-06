//squate root(integral)

// Given a number N, find its square root. You need to find and print only the integral part of square root of N.

// For eg. if number given is 18, answer is 4.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 10^8
// Sample Input 1 :
// 10
// Sample Output 1 :
// 3
// Sample Input 2 :
// 4
// Sample Output 2 :
// 2

#include<iostream>
using namespace std;
int main(){
	int n,result=0;
	cin>>n;
	for(int i=0;i<=n;i++){
          if (i * i <= n) {
            result = i;
          }else{
			  break;
		  }
        }
        cout << result;
}