#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    int positiveCount = 0, negativeCount = 0, oddCount = 0;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }
        if (numbers[i] % 2 != 0) {
            oddCount++;
        }
    }
    cout << "\nNumber of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
    return 0;
}
