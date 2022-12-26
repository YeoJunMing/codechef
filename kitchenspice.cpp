#include <iostream>

void spice() {
  int x;
  std::cin >> x;
  if (x < 4) {
    std::cout << "mild" << "\n";
  }
  else if (x >= 4 && x < 7) {
    std::cout << "medium" << "\n";
  }
  else if (x >= 7) {
    std::cout << "hot" << "\n";
  }
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    spice();
  }
}

int main() {
  tests();
}
