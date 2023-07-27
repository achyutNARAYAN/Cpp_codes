#include <iostream>

using namespace std;

  palindrome(int number) {
  int reversed_number = 0;
  int original_number = number;
  while (number > 0) {
    int digit = number % 10;
    reversed_number = reversed_number * 10 + digit;
    number /= 10;
  }
  return reversed_number == (original_number % 100) / 10;
}

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  if (is_palindrome(number)) {
    cout << number << " is a palindrome." << endl;
  } else {
    cout << number << " is not a palindrome." << endl;
  }
  return 0;
}
