#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main(){
    std::string word1;
    std::string word2;
    cin >> word1;
    cin >> word2;
    if (word1 > word2)
    {
       cout << word1 + " is larger\n";
    } else{
        cout << word2 + " is larger\n";
    }
    
    return 0;
}