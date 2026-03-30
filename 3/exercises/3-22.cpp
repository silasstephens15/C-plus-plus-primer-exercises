#include <iostream>
#include <string>
#include <vector>

using std::cout;

int main() {
    std::vector<std::string> text{"Some text.", ""};
    for(auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it){
        std::string result;
        for(auto &i: *it)
            result += toupper(i);
        cout << result << std::endl;
    }
    return 0;
}