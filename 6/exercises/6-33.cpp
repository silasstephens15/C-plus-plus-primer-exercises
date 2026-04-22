#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

void print(vector<string> v) {
  if (v.begin() == v.end())
    return;
  cout << v[0] << std::endl;
  vector<string> sub(v.begin() + 1, v.end());
  return print(sub);
}

int main() {
  vector<string> inputVector;
  string input;
  while (cin >> input, input != "0")
    inputVector.push_back(input);
  print(inputVector);
  return EXIT_SUCCESS;
}