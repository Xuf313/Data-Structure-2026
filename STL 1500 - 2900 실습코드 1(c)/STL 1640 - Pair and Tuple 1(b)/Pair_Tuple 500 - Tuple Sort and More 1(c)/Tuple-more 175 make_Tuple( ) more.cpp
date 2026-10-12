
#include <iostream>
#include <tuple>
#include <functional>
using namespace std ;

tuple<int, int> f() { // this function returns multiple values
    int x = 5;
    return make_tuple(x, 7); // return {x,7}; in C++17
}

int main() {   // heterogeneous tuple construction

    int n = 1;
    auto t = make_tuple(10, "Test", 3.14, ref(n), n);
    n = 7;

    cout << "The value of t is "  << "("
              << get<0>(t) << ", " << get<1>(t) << ", "
              << get<2>(t) << ", " << get<3>(t) << ", "
              << get<4>(t) << ")\n";

    // function returning multiple values
    int a, b;
    tie(a, b) = f();
    cout << a << " " << b << "\n";
}
