// ¹İµå½Ã C++17·Î ÄÄÆÄÀÏ ÇØ¾ß ÇÔ.

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std ;


int main() {
    unordered_map<string, int> studentScores;

    studentScores["Alice"] = 95;
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;
    studentScores["ÆØ±æÅº"] = 17;
    studentScores["¿©Ã´µÎ"] = 32;
    studentScores.insert({"David", 78});


    cout << "AliceÀÇ Á¡¼ö: " << studentScores["Alice"] << endl;


    auto it = studentScores.find("ÆØ±æÅº");
    if (it != studentScores.end()) {
        cout << "\n > ÆØ±æÅºÀÇ Á¡¼ö: " << it->second << endl;
    }


    for (const auto& pair : studentScores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
