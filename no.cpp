#include<iostream>
using namespace std;

int main (){
    int rows,i,j,num=1;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << num << " ";
            ++num; 
        }
        cout << endl;
    }

    // short int num,i,j,temp = 1;
    // cout<<"Enter number: "; cin>>num;
    // for (i = temp; i <= num; i++)
    // {
    //     cout<<i<<endl;
    //     for (j = i+1; j <= temp; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    //     temp = j;
    //     if(temp>=num)
    //     break;
    // }
    
    return 0;
} 

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14
*/