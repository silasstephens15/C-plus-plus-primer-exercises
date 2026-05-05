#include <iostream>

class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos h, pos w) : height(h), width(w){};
  Screen(pos h, pos w, char c) : height(h), width(w), contents(c){};

private:
  pos height, width;
  pos cursor;
  char contents;
};