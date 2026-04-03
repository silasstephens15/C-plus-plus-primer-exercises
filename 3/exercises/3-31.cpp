#include <iostream>

int main(){
    constexpr size_t size = 10;
    int ia[size] ={};
    for (size_t i = 1; i < size; i++){
        ia[i] = i;
    }
    for (auto i: ia)
        std::cout << ia[i] << std::endl;
    return 0;
}