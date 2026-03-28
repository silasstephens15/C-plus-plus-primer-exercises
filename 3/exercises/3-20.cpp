#include <iostream>
#include <vector>

using std::cin;
using std::cout;

int main(){
    int input;
    std::vector<int> v;
    while(cin >> input && input != 42)
        v.push_back(input);
    int x = 0;
    for(auto &i: v){
        cout << x + i << std::endl;
        x = i;
    }
    return 0;
}