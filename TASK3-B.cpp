#include <iostream>
using namespace std;
// function to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory location (address): " << ptr << endl;
    cout << "Value at that location: " << *ptr << endl;
}
int main() {
    //allocating on the stack
    int iValue = 100;   // stack allocation
    cout << "Analyzing stack variable:" << endl;
    analyze_pointer(&iValue);  // pass the address using &
    cout << endl;
    // allocating on the heap
    int *hValue = new int;   // heap allocation
    *hValue = 200;           // assign a value
    cout << "Analyzing heap variable:" << endl;
    analyze_pointer(hValue);
    delete hValue;
    return 0;
}
