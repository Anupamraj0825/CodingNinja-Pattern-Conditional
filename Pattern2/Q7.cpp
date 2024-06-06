//

// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 4



// The dots represent spaces.


// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//           232
//          34543
//         4567654
//        567898765
// Sample Input 2:
// 4
// Sample Output 2:
//            1
//           232
//          34543
//         4567654


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      for (int space = 1; space <= n - i; space++) {

        cout << ' ';
      }
      for (int j = 1; j <=i; j++) {
        cout <<i+j-1;
        
        }
        for (int j =i- 1; j>=1; j--) {
        cout << i + j - 1;
        }
        cout << endl;
      }
    }


