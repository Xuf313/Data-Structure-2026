
#include <tuple>
#include <iostream>
#include <string>
using namespace std ;


int main() {
    {
        cout << "test 1" << endl;

        int n1 = 11, n2 = 9, n3 = 10;
        int n4 = 12, n5 = 10, n6 = 11;

        if( tie(n1, n2, n3 ) < tie(n4, n5, n6) ) {
            cout << "tie(n1, n2, n3 ) < tie(n4, n5, n6)" << endl;
        } else {
            cout << "tie(n1, n2, n3 ) > tie(n4, n5, n6)" << endl;
        }
    }

    {
        cout << "test 2" << endl;

        int n1 = 11, n2 = 9, n3 = 10;
        int n4 = 12, n5 = 10, n6 = 9;

        if( tie(n1, n2, n3 ) < tie(n4, n5, n6) ) {
            cout << "tie(n1, n2, n3 ) < tie(n4, n5, n6)" << endl;
        } else {
            cout << "tie(n1, n2, n3 ) > tie(n4, n5, n6)" << endl;
        }
    }

    {
        cout << "test 3" << endl;

        int n1 = 11, n2 = 9, n3 = 10;
        int n4 = 12, n5 = 8, n6 = 9;

        if( tie(n1, n2, n3 ) < tie(n4, n5, n6) ) {
            cout << "tie(n1, n2, n3 ) < tie(n4, n5, n6)" << endl;
        } else {
            cout << "tie(n1, n2, n3 ) > tie(n4, n5, n6)" << endl;
        }
    }

    {
        cout << "test 4" << endl;

        int n1 = 11, n2 = 9, n3 = 10;
        int n4 = 10, n5 = 8, n6 = 9;

        if( tie(n1, n2, n3 ) < tie(n4, n5, n6) ) {
            cout << "tie(n1, n2, n3 ) < tie(n4, n5, n6)" << endl;
        } else {
            cout << "tie(n1, n2, n3 ) > tie(n4, n5, n6)" << endl;
        }
    }

    {
        cout << "test 5" << endl;

        int n1 = 11, n2 = 1, n3 = 10;
        int n4 = 10, n5 = 10, n6 = 11;

        if( tie(n1, n2, n3 ) < tie(n4, n5, n6) ) {
            cout << "tie(n1, n2, n3 ) < tie(n4, n5, n6)" << endl;
        } else {
            cout << "tie(n1, n2, n3 ) > tie(n4, n5, n6)" << endl;
        }
    }

    return 0;
}
