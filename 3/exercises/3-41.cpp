#include <iostream>
#include <vector>

int main(){
    int arr[] = {0, 1, 2, 3};
    std::vector<int> vec(arr, arr + 4);
    for (auto i: vec)
        std::cout << i << std::endl;
    return 0;
}