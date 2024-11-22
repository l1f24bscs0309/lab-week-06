#include <iostream>
using namespace std;

int main() {

  int num = 10;
  int pre_fix, post_fix;

  pre_fix = ++num;
  num = 10;
  post_fix = num++;
  cout << "Prefix increment: " << pre_fix << endl;
  cout << "Postfix increment: " << post_fix << endl;
  cout << "Value of num after postfix increment: " << num << endl;
  return 0;
}
