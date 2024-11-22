#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    int input;

    cout << "Enter a number: ";
    cin >> input;

    if (input > 0) {
        for (int i = 0; i < input; i++) {
            counter++;  
            cout << "Postfix increment: " << counter << endl;
        }
    } else if (input < 0) {
        for (int i = 0; i > input; i--) {
            ++counter;  
            cout << "Prefix increment: " << counter << endl;
        }
    } else {
        cout << "Zero entered, counter is not changed." << endl;
    }

    return 0;
}
