#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <sstream>
using namespace std ;


void wordCounter() {
   string text = "apple banana apple cherry banana apple";
   unordered_map<std::string, int> frequency;

   istringstream iss(text);
   string word;

    while (iss >> word) {
        frequency[word]++;
    }

    // 결과 출력
    for (const auto& pair : frequency) {
       cout << pair.first << ": " << pair.second << "회" <<endl;
    }
}


int main() {
    wordCounter() ;
}
