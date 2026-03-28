#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(){
    string input;
    std::vector<string> v;
    cout << "Enter words to uppercase, type /E to end: \n";
    while(cin >> input && input != "/E")
        v.push_back(input);
    for (auto &i: v){
        for (auto &c: i)
            c = toupper(c);
    }
    int index = 0;
    for (auto &i: v){
        cout << i << " ";
        index++;
        if(index == 8){
            cout<<std::endl;
            index = 0;
        }
    }
    cout << std::endl;
    return 0;
}