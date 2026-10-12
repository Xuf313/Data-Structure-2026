#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std ;

struct Student {
    string name;
    string department;
    int grade;
};

void groupStudentsByDepartment() {
    vector<Student> students = {
        {"Alice", "Computer Science", 3},
        {"Bob", "Mathematics", 2},
        {"Charlie", "Computer Science", 1},
        {"David", "Physics", 3},
        {"Eve", "Mathematics", 2}
    };

    unordered_map<string, vector<Student>> departmentGroups;

    // 학과별로 학생 그룹화
    for (const auto& student : students) {
        departmentGroups[student.department].push_back(student);
    }

    // 결과 출력
    for (const auto& group : departmentGroups) {
        cout << "학과: " << group.first << endl;
        for (const auto& student : group.second) {
            cout << "  - " << student.name << " (학년: "
                      << student.grade << ")" << endl;
        }
        cout << endl;
    }
}


int main(){
    groupStudentsByDepartment() ;
}
