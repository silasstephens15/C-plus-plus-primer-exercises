#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool containsCapitals(const string &s) {
  bool containsCapital = false;
  for (auto i : s) {
    if (std::tolower(i) != i)
      containsCapital = true;
  }
  return containsCapital;
}

void toLowercase(string &s) {
  for (size_t i = 0; i != s.length(); i++) {
    s[i] = std::tolower(s[i]);
  }
}

int main() {
  string input;
  cin >> input;
  cout << containsCapitals(input) << " " << input << std::endl;
  toLowercase(input);
  cout << input << std::endl;
  return 0;
}