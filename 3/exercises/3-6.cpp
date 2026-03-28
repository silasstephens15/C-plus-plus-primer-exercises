#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main(){
    std::string s;
    cin >> s;
    for (auto &c: s)
        c = 'X';
    cout << s << std::endl;
    return 0;
}