#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  string input;
  vector<string> words;
  vector<unsigned> amounts;
  while (cin >> input, input != "0") {
    bool inputInWords = false;
    for (int i = 0; i != words.size(); ++i) {
      if (words[i] == input) {
        inputInWords = true;
        ++amounts[i];
        break;
      }
    }
    if (!inputInWords) {
      words.push_back(input);
      amounts.push_back(1);
    }
  }
  for (int i = 0; i != words.size(); ++i)
    cout << words[i] << " " << amounts[i] << std::endl;
  return 0;
}