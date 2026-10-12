#include <tuple>
#include <utility>
#include <iostream>
using namespace std ;


template<size_t I = 0, typename... Tp>
inline typename enable_if<I == sizeof...(Tp), void>::type
print(tuple<Tp...>& t){

}

template<size_t I = 0, typename... Tp>
inline typename enable_if<I < sizeof...(Tp), void>::type
print(tuple<Tp...>& t) {
    cout << get<I>(t) << endl;
    print<I + 1, Tp...>(t);
}

int main() {
  typedef tuple<int, float, double, int, int, string > T;
  T my = make_tuple(2, 3.14159F, 2345.678, 45, -90, "Good");

  print( my );
}

