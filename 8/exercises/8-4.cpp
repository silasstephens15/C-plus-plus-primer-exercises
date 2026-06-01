#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

void open(string f, vector<string> &v) {
  std::ifstream in(f);
  if (in) {
    string line;
    while (getline(in, line)) {
      v.push_back(line);
    }
  } else {
    std::cout << "Failed to open.";
  }
  in.close();
}

int main() {
  vector<string> data;
  open("../data/test.txt", data);
  for (auto line : data) {
    std::cout << line;
  }
  return 0;
}