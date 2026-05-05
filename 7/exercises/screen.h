#include <iostream>
#include <string>

class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos h, pos w) : height(h), width(w){};
  Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c){};
  Screen &move(pos r, pos c);
  Screen &set(char);
  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }

private:
  pos height, width;
  pos cursor;
  std::string contents;
  void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}