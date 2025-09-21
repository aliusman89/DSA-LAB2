#include <iostream>
using namespace std;

int main() {
    int size = 20;  
    // dynamic memory allocation for salary array
    int *salArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i);   
    }
    // applying increment formula
    for (int i = 0; i < size; i++) {
        *(salArray + i) = *(salArray + i) + (*(salArray + i) / (i + 1));
    }

    // display salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << " ";
    }
    cout << endl;
    // deleting allocated memory
    delete [] salArray;

    return 0;
}
