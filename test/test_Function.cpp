#include <cstdio>
#include <functional>
#include <iostream>

struct func_printnum_t {
  void operator()() const { printf("%d %d\n", x, y); }
  int& x;
  int& y;
};

void repeattwice(std::function<void()> const& func) {
  func();
  func();
}

int main() {
  int x;
  int y;
  std::cin >> x >> y;
  repeattwice([&x, &y] { printf("%d %d\n", x, y); });
}