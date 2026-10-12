#include <iostream>
#include <unordered_map>
#include <string>

template<typename Key, typename Value>
class SimpleCache {
private:
    std::unordered_map<Key, Value> cache;
    size_t maxSize;

public:
    SimpleCache(size_t size = 100) : maxSize(size) {}

    bool contains(const Key& key) const {
        return cache.find(key) != cache.end();
    }

    Value get(const Key& key) {
        auto it = cache.find(key);
        if (it != cache.end()) {
            return it->second;
        }
        throw std::runtime_error("Key not found in cache");
    }

    void put(const Key& key, const Value& value) {
        if (cache.size() >= maxSize) {
            // 간단한 캐시 제거 전략: 첫 번째 요소 제거
            cache.erase(cache.begin());
        }
        cache[key] = value;
    }

    void printCache() const {
        for (const auto& pair : cache) {
            std::cout << pair.first << " -> " << pair.second << std::endl;
        }
    }
};

int main() {
    SimpleCache<std::string, int> cache(3);

    cache.put("one", 1);
    cache.put("two", 2);
    cache.put("three", 3);

    std::cout << "현재 캐시 내용:" << std::endl;
    cache.printCache();

    cache.put("four", 4); // 가장 오래된 요소가 제거됨

    std::cout << "\n네 번째 요소 추가 후:" << std::endl;
    cache.printCache();

    return 0;
}
