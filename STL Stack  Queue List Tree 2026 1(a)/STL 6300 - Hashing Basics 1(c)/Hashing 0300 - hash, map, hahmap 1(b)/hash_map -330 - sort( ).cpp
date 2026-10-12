#include <iostream>
#include <unordered_map>
#include <map>

int main() {
    std::unordered_map<std::string, int> wordCount = {
        {"apple", 54},        {"banana", 35},        {"cherry", 73},
        {"date", 62},  {"kiwi", 15}, {"mango", 32}, {"pear", 17},
        {"date", 20}
    };

    // std::map은 키로 자동 정렬됨
    std::map<std::string, int> sortedMap(wordCount.begin(), wordCount.end());

    // 정렬된 결과 출력
    for (const auto& pair : sortedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
