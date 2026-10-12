#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <stdio.h>

using namespace std ;

long string_hash(char *mystring, int salt) {
    unsigned long hash = (unsigned long)salt;

    if (mystring == NULL) {
        return (long)hash;
    }

    // DJB2 해시 알고리즘 변형
    int c;
    while ((c = *mystring++)) {
        hash = ((hash << 5) + hash) + c;  // hash * 33 + c
    }

    return (long)hash;
}

#include <iostream>
#include <string>


int main() {
    vector<string> test_strings = {
        "Hello World",
        "hello world",
        "Hello World!",
        "test",
        "12345",
        "",
        "가나다라마바사" // 한글 테스트
    };

    cout << "Testing hash_str_str function:\n\n";

    for (const auto& str : test_strings) {
        string hash1 = string_hash(str);

