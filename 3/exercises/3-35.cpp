#include <iostream>

int main(){
    constexpr size_t size = 10;
    int arr[size];
    int *e = arr + size;
    for (int *i = arr; i < e; i++)
        *i = 0;
    for (auto x: arr)
        std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}