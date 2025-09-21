#include <iostream>
using namespace std;
// Function to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory location (address): " << ptr << endl;
    cout << "Value at that location: " << *ptr << endl;
}
int main() {
    int num = 42;
    int *p = &num;
    // Call the function
    analyze_pointer(p);
    return 0;
}
