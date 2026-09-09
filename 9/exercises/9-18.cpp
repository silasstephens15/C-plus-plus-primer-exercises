#include <deque>
#include <iostream>
#include <string>

int main() {
  std::string word;
  std::deque<std::string> q;
  while (std::cin >> word && word != "0")
    q.push_back(word);
  for (auto i : q)
    std::cout << i << " ";
  return 0;
}