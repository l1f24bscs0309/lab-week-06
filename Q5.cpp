#include <iostream>

using namespace std;

int main() {
    int score;
    int countA = 0, countOthers = 0;

    cout << "Enter score for Student 1 (0-100): ";
    cin >> score;
    if (score >= 90) {
        ++countA;
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        countOthers++;
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        countOthers++;
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        countOthers++;
        cout << "Grade: D" << endl;
    } else {
        countOthers++;
        cout << "Grade: F" << endl;
    }

    cout << "Enter score for Student 2 (0-100): ";
    cin >> score;
    if (score >= 90) {
        ++countA;
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        countOthers++;
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        countOthers++;
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        countOthers++;
        cout << "Grade: D" << endl;
    } else {
        countOthers++;
        cout << "Grade: F" << endl;
    }

    cout << "Enter score for Student 3 (0-100): ";
    cin >> score;
    if (score >= 90) {
        ++countA;
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        countOthers++;
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        countOthers++;
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        countOthers++;
        cout << "Grade: D" << endl;
    } else {
        countOthers++;
        cout << "Grade: F" << endl;
    }

    cout << "Enter score for Student 4 (0-100): ";
    cin >> score;
    if (score >= 90) {
        ++countA;
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        countOthers++;
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        countOthers++;
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        countOthers++;
        cout << "Grade: D" << endl;
    } else {
        countOthers++;
        cout << "Grade: F" << endl;
    }

    cout << "Enter score for Student 5 (0-100): ";
    cin >> score;
    if (score >= 90) {
        ++countA;
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        countOthers++;
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        countOthers++;
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        countOthers++;
        cout << "Grade: D" << endl;
    } else {
        countOthers++;
        cout << "Grade: F" << endl;
    }

    cout << "Total number of 'A' grades: " << countA << endl;

    return 0;
}

