#include<iostream>
using namespace std;

 int main () {
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
 int array [n];
 // taking input of array elements
 for ( i = 0; i < n; i++)
 {
    cout<<"Enter element "<<i+1<<" : ";
    cin>>array[i];
    cout<<endl;
 }
 // displaying output of array elements
 for ( i = 0; i < n; i++)
 {
    cout<<array[i]<<" ";
 }
 cout<<"\nvalue at 2nd index is: "<<array[2];
//  cout<<"Enter a new element in existing array: -"<<endl;
//  cin>>array[n+1];
//  // displaying new output of array elements
//  for ( i = 0; i < n+1; i++)
//  {
//     cout<<array[i]<<" ";
//  }
return 0;
 }