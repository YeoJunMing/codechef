#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == b || a == c || b == c)
      std::cout << "no" << "\n";
    else
      std::cout << "yes" << "\n";
  }
}
