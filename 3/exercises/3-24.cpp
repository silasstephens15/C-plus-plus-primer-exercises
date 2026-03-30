#include <iostream>
#include <vector>

using std::cout;

int main(){
    std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> result;
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        result.push_back(*it + *(++it));
    for (auto &i: result)
        cout<< i <<std::endl;
    return 0;
}