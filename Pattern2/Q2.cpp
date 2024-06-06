//Mirrow Number pattern

// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4

// The dots represent spaces.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 3
// Sample Output 1:
//       1 
//     12
//   123
// Sample Input 2:
// 4
// Sample Output 2:
//       1 
//      12
//     123
//    1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i+1;space++){
            cout<<' ';
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}