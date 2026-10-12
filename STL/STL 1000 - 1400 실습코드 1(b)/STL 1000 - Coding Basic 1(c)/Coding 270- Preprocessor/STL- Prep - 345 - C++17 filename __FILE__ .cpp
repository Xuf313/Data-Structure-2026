#include <iostream>
#include <cstring>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : \
                     (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__))

int main() {
    std::cout << "Full path: " << __FILE__ << std::endl;
    std::cout << "Filename: " << __FILENAME__ << std::endl;
    return 0;
}
