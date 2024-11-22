#include <iostream>
using namespace std;

int main() {

    double num1 , num2 , num3 , num4 , num5;
    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;



    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        if (num2 > num3 && num2 > num4 && num2 > num5) {
            cout << "The third maximum number is: " << num2 << endl;
        } else if (num3 > num4 && num3 > num5) {
            cout << "The third maximum number is: " << num3 << endl;
        } else if (num4 > num5) {
            cout << "The third maximum number is: " << num4 << endl;
        } else {
            cout << "The third maximum number is: " << num5 << endl;
        }
    } else if (num2 > num3 && num2 > num4 && num2 > num5) {
        if (num3 > num4 && num3 > num5) {
            cout << "The third maximum number is: " << num3 << endl;
        } else if (num4 > num5) {
            cout << "The third maximum number is: " << num4 << endl;
        } else {
            cout << "The third maximum number is: " << num5 << endl;
        }
    } else if (num3 > num4 && num3 > num5) {
        if (num4 > num5) {
            cout << "The third maximum number is: " << num4 << endl;
        } else {
            cout << "The third maximum number is: " << num5 << endl;
        }
    } else if (num4 > num5) {
        cout << "The third maximum number is: " << num4 << endl;
    } else {
        cout << "The third maximum number is: " << num5 << endl;
    }
    

    return 0;
}

