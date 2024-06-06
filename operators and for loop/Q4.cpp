//sum or product

// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).

// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= N <= 12
// Sample Input 1 :
// 10
// 1
// Sample Output 1 :
// 55
// Sample Input 2 :
// 10
// 2
// Sample Output 2 :
// 3628800
// Sample Input 3 :
// 10
// 4
// Sample Output 3 :
// -1

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c;
	cin>>c;
	int sum=0,product=1;
	if(c==1){
		for(int i=0;i<=n;i++){
			sum=sum+i;
	
		}
				cout<<sum;
	}else if(c==2){
        for(int j=1;j<=n;j++){
			product=product*j;
		}
		cout<<product;
	}else {
		cout<<"-1";
	}

}