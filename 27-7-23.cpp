#include<bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
        // code here
         for(int i=1;i<=n;i++ ){
            
            for(int j=0;j<i;j++){
                
                cout<<(i+j)%2<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    printTriangle(5);
    return 0;
}