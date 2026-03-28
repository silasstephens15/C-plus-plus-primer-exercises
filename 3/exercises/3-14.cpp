#include <iostream>
#include <vector>

using std::cin;
using std::cout;

int main (){
    int input;
    std::vector<int> vec;
    while(cin >> input && input != 'E')
        vec.push_back(input);
    return 0;
}