#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
  std::ifstream in("../README");
  if (!in.is_open()) {
    std::cout << "File not open";
  }
  std::istream_iterator<std::string> in_iter(in), eof;
  std::vector<std::string> v(in_iter, eof);
  for (auto i : v)
    std::cout << i << " ";
  std::cout << std::endl;
  return 0;
}