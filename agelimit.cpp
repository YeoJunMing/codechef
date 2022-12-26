#include <iostream>

void agelimit() {
  int x, y, a;
  std::cin >> x >> y >> a;
  if (a >= x && a < y) {std::cout << "yes" << "\n";}
  else {std::cout << "no" << "\n";}
}

void test() {
  int t;
  std::cin >> t;
  while (t--) {
    agelimit();
  }
}

int main() {
  test();
}
