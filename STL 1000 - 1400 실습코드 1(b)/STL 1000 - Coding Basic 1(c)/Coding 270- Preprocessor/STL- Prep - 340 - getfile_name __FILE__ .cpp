
#include <iostream>
#include <cstring>
using namespace std ;


const char* get_filename(const char* path) {
    const char* filename = strrchr(path, '/');
    if (filename == nullptr) {
        filename = strrchr(path, '\\');
    }
    return (filename != nullptr) ? filename + 1 : path;
}

int main() {
    cout << "Full path: " << __FILE__ <<endl;
    cout << "Filename only: " << get_filename(__FILE__) <<endl;
    return 0;
}
