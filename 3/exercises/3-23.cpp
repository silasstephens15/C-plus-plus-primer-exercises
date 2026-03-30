#include <iostream>
#include <vector>

using std::cout;

int main(){
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto it = v.begin(); it != v.end(); ++it){
        *it = *it * 2;
        cout << *it << std::endl;
    }
    return 0;
}