#include <iostream>
#include <string>
#include <functional>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std ;


// 해시 함수 구현
string hash_str_str(const string& my) {
    if (my.empty()) {
        return "empty_string_hash";
    }

    // hash를 사용하여 해시 값 생성
    hash<string> hasher;
    size_t hash_value = hasher(my);

    // size_t를 16진수 문자열로 변환 (더 읽기 쉽게)
    stringstream ss;
    ss << hex << setw(16) << setfill('0') << hash_value;
    return ss.str();
}

// 다양한 해시 알고리즘을 지원하는 확장 버전
class AdvancedHasher {
public:
    enum class HashAlgorithm {
        STD_HASH,
        DJB2,
        SIMPLE,
        CUSTOM
    };

    static string hash_str_str(const string& my,
                                   HashAlgorithm algo = HashAlgorithm::STD_HASH,
                                   unsigned int seed = 5381) {
        if (my.empty()) {
            return "empty";
        }

        switch (algo) {
            case HashAlgorithm::STD_HASH:
                return stdHash(my);
            case HashAlgorithm::DJB2:
                return djb2Hash(my, seed);
            case HashAlgorithm::SIMPLE:
                return simpleHash(my);
            case HashAlgorithm::CUSTOM:
                return customHash(my);
            default:
                return stdHash(my);
        }
    }

private:
    // 표준 hash 사용
    static string stdHash(const string& str) {
        hash<string> hasher;
        size_t hash_value = hasher(str);

        stringstream ss;
        ss << "std_" << hex << setw(16) << setfill('0') << hash_value;
        return ss.str();
    }

    // DJB2 해시 알고리즘
    static string djb2Hash(const string& str, unsigned int seed) {
        unsigned long hash = seed;

        for (char c : str) {
            hash = ((hash << 5) + hash) + static_cast<unsigned char>(c); // hash * 33 + c
        }

        stringstream ss;
        ss << "djb2_" << hex << setw(16) << setfill('0') << hash;
        return ss.str();
    }

    // 간단한 해시 함수
    static string simpleHash(const string& str) {
        unsigned long hash = 0;

        for (char c : str) {
            hash = (hash * 31) + static_cast<unsigned char>(c);
        }

        stringstream ss;
        ss << "simple_" << hex << setw(16) << setfill('0') << hash;
        return ss.str();
    }

    // 커스텀 해시 함수
    static string customHash(const string& str) {
        unsigned long hash = 0;

        for (size_t i = 0; i < str.length(); ++i) {
            hash = (hash << 3) ^ (hash >> 1) ^ static_cast<unsigned char>(str[i]);
        }

        stringstream ss;
        ss << "custom_" << hex << setw(16) << setfill('0') << hash;
        return ss.str();
    }
};

// 사용 예제
int main() {
    vector<string> test_strings = {
        "Hello World",
        "hello world",
        "Hello World!",
        "test",
        "12345",
        "",
        "password123",
        "가나다라마바사",
        "Lorem ipsum dolor sit amet"
    };

    cout << "=== Basic hash_str_str Function Test ===\n\n";

    for (const auto& str : test_strings) {
        string hash_result = hash_str_str(str);
        cout << "Input: '" << str << "'\n";
        cout << "Hash:  " << hash_result << "\n";
        cout << "Length: " << hash_result.length() << " characters\n";
        cout << "----------------------------------------\n";
    }

    cout << "\n=== Advanced Hasher Test ===\n\n";

    // 다양한 알고리즘으로 테스트
    string test_str = "Hello World";

    cout << "Testing different algorithms for: '" << test_str << "'\n\n";

    auto hash1 = AdvancedHasher::hash_str_str(test_str,
        AdvancedHasher::HashAlgorithm::STD_HASH);
    auto hash2 = AdvancedHasher::hash_str_str(test_str,
        AdvancedHasher::HashAlgorithm::DJB2);
    auto hash3 = AdvancedHasher::hash_str_str(test_str,
        AdvancedHasher::HashAlgorithm::SIMPLE);
    auto hash4 = AdvancedHasher::hash_str_str(test_str,
        AdvancedHasher::HashAlgorithm::CUSTOM);

    cout << "STD_HASH:  " << hash1 << "\n";
    cout << "DJB2:      " << hash2 << "\n";
    cout << "SIMPLE:    " << hash3 << "\n";
    cout << "CUSTOM:    " << hash4 << "\n";

    cout << "\n=== Collision Test ===\n\n";

    // 유사한 문자열 테스트
    vector<string> similar_strings = {
        "apple", "applE", "APPLE", "apple1", "apple "
    };

    for (const auto& str : similar_strings) {
        string hash = hash_str_str(str);
        cout << "'" << str << "' -> " << hash << "\n";
    }

    cout << "\n=== Performance Test ===\n\n";

    // 긴 문자열 테스트
    string long_string(1000, 'x');
    string long_hash = hash_str_str(long_string);

    cout << "Long string (1000 chars) hash: " << long_hash.substr(0, 20) << "...\n";
    cout << "Full hash length: " << long_hash.length() << " characters\n";

    return 0;
}
