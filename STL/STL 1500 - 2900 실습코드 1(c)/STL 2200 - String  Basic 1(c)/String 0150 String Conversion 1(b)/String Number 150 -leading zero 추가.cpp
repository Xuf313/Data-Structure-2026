#include <iostream>
#include <string>
using namespace std ;

string addLeadingZeros(int num, int totalWidth) {
    string str = to_string(num);
    if (str.length() < totalWidth) {
        str = string(totalWidth - str.length(), '0') + str;
    }
    return str;
}

int main() {
    int number = 7;
    string result = addLeadingZeros(number, 5);

    cout << result << endl;  // Ãâ·Â: 00007
    return 0;
}
