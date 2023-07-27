#include<iostream>
using namespace std;
int main () {
  int n , m , i, j;
  cout<<"Enter value of n: "; cin>>n; cout<<"\n";
  cout<<"Enter value of m: "; cin>>m; cout<<"\n";
  int array[n] [m];
  cout<<"Enter the all values of array: \n";
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < m; j++)
    {
        cout<<"Enter the value:" << i+1<<", " << j+1<<": ";
        cin>>array[i] [j];
    }
    cout<<"\n";
  }
  cout<<"your 2-D array is: \n";
    for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < m; j++)
    {
        cout<<array[i] [j]<<" ";
    }
    cout<<"\n";
  }
    return 0;
}

//1. find the maximum and minimum element in (1) 1-d array, (2) 2-d array (at which index it is present)

/* 2. perform linear search on a user defined array. Ask user to give 
a number from that array, and give the index value in output*/

//3 Repeat q.2 by binary searching technique

//4 perform a bubble sort on user defined array

//5 perform a selection sort on user defined array

//6 perform a insertion sort on user defined array

//7 perform all types of string manipulation in c++ 

//8 implement exception handling

//9 implement file handling

//10 import stl library and use it in your code

//11 implement basic concept of classes and objects

// #include<stdc++.h>
