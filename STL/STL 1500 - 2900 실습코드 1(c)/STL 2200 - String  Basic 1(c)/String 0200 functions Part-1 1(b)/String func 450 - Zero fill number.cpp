#include <iostream>
#include <sstream>
#include <iomanip>

int main() {

    for ( int i = 1; i <= 100; i += 1 ) {
        std::ostringstream str;
        //str << i;
        str << std::setw(5) << std::setfill('0') << i;
        std::cout << str.str() << std::endl;
    }
} // end of main( )
