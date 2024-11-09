#include <iostream>
using namespace std;
int main() {
    const int size = 7;
    int numbers[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> numbers[i];
        if (numbers[i] % 5 == 0) {
            count++;
        }
    }
    cout << "\nCount of numbers that are multiples of 5: " << count << endl;
    return 0;
}
