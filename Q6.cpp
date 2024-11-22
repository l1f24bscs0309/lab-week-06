#include <iostream>
using namespace std;

int main() {

  int num;
  int even = 0;
  int odd = 0;

  cout << "Enter a number: ";
  cin >> num;

  for (int i = 1; i <= 10; i++) {
    if ((num * i) % 2 == 0) {
      cout << num * i << " is even" << endl;
      even++;
    } else {
      cout << num * i << " is odd" << endl;
      odd++;
    }
  }

  cout << "There are " << even << " even numbers and " << odd << " odd numbers."
       << endl;

  return 0;
}

