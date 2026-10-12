#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std ;

tuple<double, char, string> get_student(int id) {
    if (id == 0) return make_tuple(3.8, 'A', "Lisa Simpson");
    if (id == 1) return make_tuple(2.9, 'C', "Milhouse Van Houten");
    if (id == 2) return make_tuple(1.7, 'D', "Ralph Wiggum");
    throw invalid_argument("id");
}

int main() {
    auto student0 = get_student(0);
    cout << "ID: 0, "
         << "GPA  : " << get<0>(student0) << ", "
         << "grade: " << get<1>(student0) << ", "
         << "name : " << get<2>(student0) << '\n';

    double gpa1;
    char grade1;
    string name1;
    tie(gpa1, grade1, name1) = get_student(1);
    cout << "ID: 1, "
         << "GPA  : " << gpa1 << ", "
         << "grade: " << grade1 << ", "
         << "name : " << name1 << '\n';
}
