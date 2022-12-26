#include <iostream>

void squats() {
  int x, y = 0;
  std::cin >> x;
  y = 15 * x;
  std::cout << y << "\n";
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    squats();
  }
}

int main() {
  tests();
}
