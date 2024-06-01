//Sum of even number till n

// Problem statement
// Given a number N, print sum of all even numbers from 1 to N.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// Integer N
// Output Format :
// Required Sum 
// Sample Input 1 :
//  6
// Sample Output 1 :
// 12
// Sample Input 2 :
//  7
// Sample Output 2 :
// 12
#include<iostream>
using namespace std;
int main(){
    int n=0,sum=0;
    int i;
    cin>>i;
    while(n<=i){
        sum=sum+n;
             n=n+2;    
    }
     cout<<sum;
}