#include <iostream>
using namespace std;
int reverse_number(int number) {
  int reversed_number = 0;
  while (number > 0) {
    int remainder = number % 10;
    reversed_number = reversed_number * 10 + remainder;
    number /= 10;
  }
  return reversed_number;
}
int main() {
  cout<<"enter no: "; cin>>number;
  cout << "The reversed number is " << reverse_number(number) << endl;
  return 0;
}