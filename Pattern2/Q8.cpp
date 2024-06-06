// Print the following pattern for the given number of rows.

// Note: N is always odd.


// Pattern for N = 5



// The dots represent spaces.




// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= N <= 49
// Sample Input 1:
// 5
// Sample Output 1:
//   *
//  ***
// *****
//  ***
//   *
// Sample Input 2:
// 3
// Sample Output 2:
//   *
//  ***
//   *

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int currRow = 1;

	// Upper half.
	while (currRow <= (n / 2) + 1)
	{
		// This tells us the number of spaces to give.
		int spaces = 1;
		while (spaces <= (n / 2) + 1 - currRow)
		{
			cout << " ";
			spaces++;
		}

		int currCol = 1;
		// This tells us the number of stars for current row.
		while (currCol <= (2 * currRow) - 1)
		{
			cout << "*";
			currCol++;
		}

		cout << endl;
		currRow++;
	}
	currRow = 1;

	// Lower Half.
	while (currRow <= n / 2)
	{
		// This tells us the number of spaces to give.
		int spaces = 1;
		while (spaces <= currRow)
		{
			cout << " ";
			spaces++;
		}

		int currCol = 2 * ((n / 2) - currRow + 1) - 1;
		
		// This tells us the number of stars for current row.
		while (currCol >= 1)
		{
			cout << "*";
			currCol--;
		}

		cout << endl;
		currRow++;
	}
}
