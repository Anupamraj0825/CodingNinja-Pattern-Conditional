//intresting patterns

// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 0 <= N <= 26
// Sample Input 1:
// 8
// Sample Output 1:
// H
// GH
// FGH
// EFGH
// DEFGH
// CDEFGH
// BCDEFGH
// ABCDEFGH
// Sample Input 2:
// 7
// Sample Output 2:
// G
// FG
// EFG
// DEFG
// CDEFG
// BCDEFG
// ABCDEFG
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    char ch='A'+n-i;
    for(int j=1;j<=i;j++){
      char ch2=ch+j-1;
      cout<<ch2;

    }}
}