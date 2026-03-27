#include <iostream>
#include <string>

using std::cin;
using std::cout;

 int main(){
    std::string word;
    std::string previous;
    while(cin >> word)
        {previous = previous + word + " ";
        cout<<previous + "\n";}
    return 0;
 }