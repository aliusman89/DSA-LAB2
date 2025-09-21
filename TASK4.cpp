#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    int size;
    cout << "Enter maximum length of the string: ";
    cin >> size;
    cin.ignore(); 
    // dynamically allocate memory for string and +1 is for null terminator
    char *str = new char[size + 1];
    cout << "Enter a string: ";
    cin.getline(str, size + 1);
    // reverse the string in place
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    //displaying reversed string
    cout << "Reversed string: " << str << endl;
    delete[] str;
    return 0;
}
