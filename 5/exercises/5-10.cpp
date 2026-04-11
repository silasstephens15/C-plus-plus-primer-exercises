#include <iostream>
#include <locale>

int main() {
  char input;
  input = tolower(input);
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  while (std::cin >> input, input != '0') {
    switch (input) {
    case 'a':
      ++aCnt;
      break;
    case 'e':
      ++eCnt;
      break;
    case 'i':
      ++iCnt;
      break;
    case 'o':
      ++oCnt;
      break;
    case 'u':
      ++uCnt;
      break;
    }
  }
  std::cout << "a count: " << aCnt << '\n'
            << "e count: " << eCnt << '\n'
            << "i count: " << iCnt << '\n'
            << "o count: " << oCnt << '\n'
            << "u count: " << uCnt << '\n';
  return 0;
}