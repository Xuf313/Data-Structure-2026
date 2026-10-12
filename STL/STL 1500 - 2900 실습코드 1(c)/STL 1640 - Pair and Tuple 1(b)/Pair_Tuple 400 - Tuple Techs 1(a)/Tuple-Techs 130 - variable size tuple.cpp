
#include <cstddef>
#include <iostream>
#include <tuple>
#include <type_traits>
#include <utility>
using namespace std ;

template <typename T, size_t ...I, typename F>
void tuple_foreach_impl(T &&tuple, index_sequence<I...>, F &&func) {
    // In C++17 we would use a fold expression here, but in C++14 we have to resort to this.
    using dummy_array = int[];
    dummy_array{(void(func(get<I>(tuple))), 0)..., 0};
}

template <typename T, typename F> void tuple_foreach(T &&tuple, F &&func) {
    constexpr int size = tuple_size<remove_reference_t<T>>::value;
    tuple_foreach_impl(forward<T>(tuple), make_index_sequence<size> {},
                       forward<F>(func));
}

int main() {
    auto x = make_tuple("Meow", 1, "Pizza", 7890, 2.3);

    tuple_foreach(x, [](auto &&value) { cout << value << ' '; });

}
