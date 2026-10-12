// Illustration of range-for loop  using CPP code
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {

    string str = "PUSAN National University";
    for (char c : str) cout << c << ' ';

    cout << '\n';
    map <int, string> MAP({{1, "«œ∑Á"}, {2, "¿Ã∆≤"}, {3, "ªÁ»Í"}, \
                           {4, "≥™»Í"}, {5, "¥Âºº"}  });
    for (auto i : MAP)
        cout << '{' << i.first << ", " << i.second << "}\n";

}
