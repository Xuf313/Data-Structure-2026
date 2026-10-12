#include <utility>
#include <string>
#include <complex>
#include <tuple>
#include <iostream>
using namespace std;


int main() {

    pair<int, float> p1;
    cout << "Value-initialized: "
              << p1.first << ", " << p1.second << '\n';

    pair<int, double> p2(42, 0.123);
    cout << "Initialized with two values: "
              << p2.first << ", " << p2.second << '\n';

    pair<char, int> p4(p2);
    cout << "Implicitly converted: "
              << p4.first << ", " << p4.second << '\n';

    pair<complex<double>, string> p6(
                    piecewise_construct,
                    forward_as_tuple(0.123, 7.7),
                    forward_as_tuple(10, 'a'));
    cout << "Piecewise constructed: "
              << p6.first << ", " << p6.second << '\n';
}
