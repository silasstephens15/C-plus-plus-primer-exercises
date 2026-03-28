#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main(){
    std::string s;
    std::string result;
    getline(cin, s);
    for (auto &c: s){
        if (!ispunct(c))
            result += c;
    }
    cout << result << std::endl;
    return 0;
}