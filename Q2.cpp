#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Postfix increment: " << num++ << endl;
  cout << "Prefix increment: " << ++num << endl;
  cout << "Postfix decrement: " << num-- << endl;
  cout << "Prefix decrement: " << --num << endl;

  return 0;
}
