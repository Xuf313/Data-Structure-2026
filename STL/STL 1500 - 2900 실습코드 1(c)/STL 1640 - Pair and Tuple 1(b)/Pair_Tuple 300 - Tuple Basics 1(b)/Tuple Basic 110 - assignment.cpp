
#include <iostream>
#include <tuple>
using namespace std ;

int main() {
    tuple<int, int, int> myTuple(10, 20, 30), Temp1; // 초기화

    // 0번째 요소 (첫 번째 int)에 100 할당
    get<0>(myTuple) = 100;

    // 1번째 요소 (두 번째 int)에 200 할당
    get<1>(myTuple) = 200;

    // 결과 출력
    cout << "(" << get<0>(myTuple) << ", "
              << get<1>(myTuple) << ", "
              << get<2>(myTuple) << ")" << endl;



    Temp1 = make_tuple( -10, -20, 99) ;
    // 튜플을 개별 변수로 분해

    auto& [a, b, c] = myTuple;

    // 특정 요소 수정
    a = -51; // 첫 번째 요소
    b = -50; // 두 번째 요소

    cout << "(" << a << ", " << b << ", " << c << ")" << endl;


    int x, y;
    tie(x, y, ignore) = myTuple; // 첫 번째와 두 번째 요소만 추출

    x = 100; // 로컬 변수 수정
    y = 200;

    // 튜플 자체는 변경되지 않음 (로컬 변수만 변경됨)
    cout << "Tuple: (" << get<0>(myTuple) << ", "
              << get<1>(myTuple) << ", "
              << get<2>(myTuple) << ")" << endl;

    cout << "Local: (" << x << ", " << y << ")" << endl;


    return 0;
}
