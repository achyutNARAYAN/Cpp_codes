// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"enter the no of the rows: ";
// cin>>n;
// for ( int i = 0; i <n; i++){
// for (int j = 0; j <=i; j++){

//     cout<<" * ";
// }
//  cout<<endl;
// }
//  return 0;   
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a no";
//     cin>>n;
//     // CASE 1: IF - IF - IF
//     cout<<"If-if-if statements are running\n";
//     if (n>10)
//     {
//         cout<<"greater than 10\n";
//     }
//     if (n>20)
//     {
//         cout<<"greater than 20\n";
//     }
//     if (n>30)
//     {
//         cout<<"greater than 30\n"; 
//     }

//     cout<<"If-else-if ladder is running\n";
//     if (n>10)
//     {
//         cout<<"greater than 10\n";
//     }
//     else if (n>20)
//     {
//         cout<<"greater than 20\n";
//     }
//     else
//     {
//         cout<<"greater than 30\n"; 
//     }
    

//     // CASE 2: IF - ELSE - IF


//     return 0;
// }
// #include<bits/stdc++.h>

// using namespace std;
// int main (){

//     vector<int> v{1,2,3};
//     vector<int> v2(10,7);
//     // v.size()3
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     v.push_back(4);
//     v.push_back(5);
//     cout<<"\nmy new vector is\n";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<"\nmy v2 vector is\n";
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout<<v2[i]<<" ";
//     }
//     cout<<"\nsize of my v vector is"<<v.size();
//     cout<<"\nsize of my v2 vector is"<<v2.size();
//     cout<<"\nvalue of my v vector at index 3 is: "<<v[3];

//     cout<<"\nvalue of my v vector at fisrt is: "<<v.front();
    
//     cout<<"\nvalue of my v vector at last is: "<<v.back()<<"\n";
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     // cin>>str;
    
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     a = 1;
//     b = 2;
//     int multiply = a * b;

//     cout << "The multiplication result is: " << multiply << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
//  int main (){
//     int n;
//     cin>>n;
//     cout<<"enter any no:"<<n<<endl;
//     if (n>0);
//     {
//        cout<<"positive";
//     }
//     if (n<0);
//     {
//         cout<<"negative";
//     } 
//     return 0;
//  }
//  #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     cout << "Enter any number: " << n << endl;
    
//     if (n > 0) {
//         cout << "Positive" << endl;
//     }
    
//     if (n < 0) {
//         cout << "Negative" << endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main (){

// int n;
// cout<<"enter the no:";
// cin>>n;
// for ( int i = 1; i <=n; i++){
//     for ( int j= 1; j<=i; j++)
//     {
//       cout<<" * ";
//     }
//     cout<<endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main (){
    
//     int a=2;
//     int b=a+1;
//     if ((a=3)==b)
//     {
//         cout <<a;
//     }
//     else{
//         cout<<a+1;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     int i;
//     int sum = 0;
//     cin >> n;
//     cout << "Enter the value of n:" << n << endl;
    
//          while(i<n){
//          i = i + 2;
//          sum = sum + i;
//          if(i%2==0)
//          cout << "The value is:" << sum << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
int n;
int i = 1;
int r;
cin >> n;
while(i<=n){
    int s = n-i;
    while(s){
        cout << " ";
        s = s - 1;
    }
    int j = 1;
    int r = n;
    while(j<=r-i){
        cout << i;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
}
    return 0;
}