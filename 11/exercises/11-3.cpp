#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
  std::map<std::string, int> word_count;
  std::set<std::string> excluded_words{"the", "a"};
  std::string word;
  while (std::cin >> word) {
    transform(word.begin(), word.end(), word.begin(),
              [](auto c) { return tolower(c); });
    word.erase(remove(word.begin(), word.end(), ','), word.end());
    word.erase(remove(word.begin(), word.end(), '.'), word.end());
    word.erase(remove(word.begin(), word.end(), '?'), word.end());
    word.erase(remove(word.begin(), word.end(), '!'), word.end());
    if (excluded_words.find(word) == excluded_words.end())
      ++word_count[word];
  }
  for (const auto &i : word_count)
    std::cout << i.first << " appeared " << i.second << " times.\n";
  return 0;
}