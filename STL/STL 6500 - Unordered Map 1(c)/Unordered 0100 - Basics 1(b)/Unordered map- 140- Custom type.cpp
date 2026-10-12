#include <iostream>
#include <unordered_map>
using namespace std ;

struct Person {
    string name;
    int age;
    bool operator==(const Person& other) const {   // 비교 연산자, 이것 없으면 디짐. (필수)
        return name == other.name && age == other.age;
    }
};

// custom type에서는 해시 함수는 반다시  정의되어야 함. 필수라고 필 수....
struct PersonHash {
    size_t operator()(const Person& p) const {
        long fout ;
        cout << "\n Local hash 1 " << hash<string>{}(p.name)  ;
        cout << "\n Local hash 2 " << hash<int>   {} ((p.age) << 1)  ;
        fout =  hash<string>{}(p.name)^(hash<int>{}(p.age) << 1);
        cout << "\n fout = " << fout ;
        return hash<string>{}(p.name)^(hash<int>{}(p.age) << 1);
        // 이름과 나이*2값을 각각 hashing한 다음 이것을  exclusive or해서 복잡하게 만듬.
    }
};

int main() {
    unordered_map<Person, string, PersonHash> personMap;  // 사용한 hash 함수를 반드시 지정해야 함. custom type에서는

    Person p1{"Alice", 25};
    Person p2{"Bob",   30};
    Person p3{"여척두",  22};
    Person p4{"팽길탄",  50}; // 이건 배열로 하는 것이 좋겠죠 ?

    personMap[p1] = "Engineer";
    personMap[p2] = "Doctor";
    personMap[p3] = "백수";
    personMap[p4] = "양아치";

    cout << "\n > 모두 찍아보자고 !! \n\n" ;
    for (const auto& pair : personMap) {
        const Person& person = pair.first;
        cout << "> " <<  person.name << " - 나잇살 (" << person.age << "): "
                  << pair.second << endl;
    }

    return 0;
}
