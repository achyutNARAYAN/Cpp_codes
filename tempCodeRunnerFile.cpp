// #include<iostream>
// using namespace std;
// int main (){
// int n;
// int i=1;
// cout<<" enter the no of rows: ";
// cin>>n;
// while (i<=n){
//     int j=1;
//     int r=i;
//     while (j<=i){
//     cout<<r<<" ";
//     r=r+1;
//     j=j+1;
//     }
//     cout<<endl;
//     i=i+1;   
//     }

// cout<<" enter the no: ";
// cin>>n;
// for (int i = 0; i <n; i++){
//     for (int j = 0; j <=i; j++)
//     {
//          cout<<" * ";
//     }
//          cout<<endl;
// }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main (){

//     int n;
//     // TAKE ARRAY INPUT FROM USER...

//     // first of all, take the array length as input and store it in "n"
//     cout<<"Enter size of array: "; // show appropriate message to user
//     cin>>n; //take array size from user and store it in "n"

//     //defining the array based on size value
//     int arr[n];

//     // in a loop, store all values of array in "arr[]" of size "n"
//     cout<<endl<<"Enter elements of your array: -\n"; // show appropriate message to user
//     for ( int i = 0; i <n; i++)
//     {
//         // store elements in arr[i]
//         cin>>arr[i];
//     }

//     // DISPLAY ALL THE ELEMENTS OF ARRAY...

//     // in a loop, display all values of array present in "arr[]"
//     cout<<endl<<"Here is your array: "; // show appropriate message to user
//     for ( int i = 0; i <n; i++)
//     {
//         // display elements in arr[i]
//         cout<<arr[i]<<" ";
//     }

//     // DISPLAY ALL THE ELEMENTS OF ARRAY IN REVERSE...

//     // in a loop, display all values of array present in "arr[]" in reverse
//     cout<<endl<<"Here is your array in reverse: "; // show appropriate message to user
//     for ( int i = n-1; i >=0; i--)
//     {
//         // display elements in arr[i] in reverse
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i= 1;
//     while (i<= n) {
//         int s = i-1;
//         while (s > 0) {
//             cout << " ";
//             s--;
//         }

//         int j=1;
//         while (j<=n-i) {
//             cout << "*";
//             j++;
//         }

//         cout << endl;
//         i++;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<string> findThePattern(int n) {
          vector<string> result;
        string temp="";
        int k=0;
        
        for(int i=0 ; i<n ; i++)
         {
             temp="";
             for(int j=0 ; j<n ; j++)
              {
                  if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
                     temp+='$';
                  else
                    {
                     char c='A'+k;
                     temp+=c;
                     k++;
                    }

              }
              result.push_back(temp);
         }
        
        return result;
    }
};