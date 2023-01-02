#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int b, quotient, ans = 0;
    std::cin >> b;
    if (b > 2) {
      quotient = (b / 2) - 1;
      for (int i = 1; i <= quotient; i++) {
        ans += i;
      }
      std::cout << ans << "\n";
    }
    else {
      std::cout << "0\n";
    }
  }
}
