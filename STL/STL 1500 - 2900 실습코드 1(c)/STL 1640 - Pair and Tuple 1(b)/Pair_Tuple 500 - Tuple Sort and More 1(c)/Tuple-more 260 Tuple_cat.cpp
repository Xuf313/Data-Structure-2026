
#include <tuple>
#include <iostream>
#include <string>
using namespace std ;

int main() {
    tuple <int, string> UserInfo  (1002, "부산갈매기");
    tuple <int,    int> GameResult(12, 3);

    auto UserGaemResult = tuple_cat(UserInfo, GameResult);

    cout << get<0>(UserGaemResult) << endl;
    cout << get<1>(UserGaemResult) << endl;
    cout << get<2>(UserGaemResult) << endl;
    cout << get<3>(UserGaemResult) << endl;

    return 0;
}


