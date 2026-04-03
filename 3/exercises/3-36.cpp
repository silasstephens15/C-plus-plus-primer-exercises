#include <iostream>

int main(){
    bool equal = true;
    constexpr size_t size = 4;
    int arr1[size] = {0, 0, 2, 0};
    int arr2[size] = {0, 1, 2, 3};
    int *e = arr1 + size;
    for (int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            equal = false;
        }
    }
    std::cout<<equal<<"\n";
    return 0;
}