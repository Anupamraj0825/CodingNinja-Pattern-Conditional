// Given a binary number as an integer N, convert it into decimal and print.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 1100
// Sample Output 1 :
// 12
// Sample Input 2 :
// 111
// Sample Output 2 :
// 7

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int decimal=0,power=1;  // power=1 because 2^0=1
    for(int i=0;n>0;i++){
        int last=n%10;
        decimal=decimal+last*power;
          n=n/10;
        power=power*2;
      

    }
    cout<<decimal;
}