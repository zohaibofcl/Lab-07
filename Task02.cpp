#include <iostream>
using namespace std;
int main() {
    const int numStudents = 10;
    int hours[numStudents];
    int maxHours = 0;
    int maxIndex = 0;
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the number of hours studied by student " << (i + 1) << ": ";
        cin >> hours[i];
        if (hours[i] > maxHours) {
            maxHours = hours[i];
            maxIndex = i;
        }
    }
    cout << "\nStudy hours of each student:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": " << hours[i] << " hours" << endl;
    }
    cout << "\nStudent " << (maxIndex + 1) << " studied the most with " << maxHours << " hours." << endl;
    return 0;
}
