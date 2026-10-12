#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <map>

int main() {
    std::unordered_map<std::string, int> wordCount = {
        {"apple", 54},        {"banana", 35},        {"cherry", 73},
        {"date", 62},  {"kiwi", 15}, {"mango", 32}, {"pear", 17},
        {"date", 20}
    };

    // vector로 복사
    std::vector<std::pair<std::string, int>> vec(wordCount.begin(), wordCount.end());

    // 값 기준 정렬 (내림차순)
    std::sort( vec.begin(), vec.end(), \
              [](const std::auto& a, const std::auto& b) { return a.second > b.second; });

    // 정렬된 결과 출력
    for (const std::auto& pair : vec) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
