#include <iostream>

using std::cin;
using std::cout;
using std::istream;

istream &read(istream &s) {
  while (!s.fail() && !s.eof()) {
    cout << s.rdbuf();
  }
  s.clear();
  return s;
}

int main() {
  read(cin);
  return 0;
}