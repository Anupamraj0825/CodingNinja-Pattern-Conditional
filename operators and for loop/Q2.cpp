//All prime number

// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

// Print the prime numbers in different lines.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= N <= 100
// Sample Input 1:
// 9
// Sample Output 1:
// 2
// 3
// 5
// 7
// Sample Input 2:
// 20
// Sample Output 2:
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n>=2){
        for(int i=2;i<=n;i++){
            bool isprime=true;
            for(int j=2;j< i;j++){
                if( i%j==0){
                 isprime=false;   
                }
            }
            if(isprime){
                cout<<i;
            }
        }
    } 

    }


