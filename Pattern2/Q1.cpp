//Reverse triangel 
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
        cout<<"*";
    }
    cout<<endl;
}
}