#include <iostream>

void hours() {
  int x, y, ans = 0;
  std::cin >> x >> y;
  
  if (x == 12) {
    ans = y;
    std::cout << ans << "\n";
  }
  else {
    ans = y - x;
    std::cout << ans << "\n";
  }
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    hours();
  }
}

int main() {
  tests();
}
