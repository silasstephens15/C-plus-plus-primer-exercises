#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;

int main (){
    std::vector<std::string> v{10, "hi"};
    cout << v.size() << std::endl;
    for (auto &i: v)
        cout << i << ' ';
    return 0;
}