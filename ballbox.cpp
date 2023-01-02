#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k, min = 0; //balls, boxes
    std::cin >> n >> k;
    for (int i = 1; i <= k; i++) {
      min += i;
    }
    if (n >= min) {
      std::cout << "YES\n";
    }
    else {
      std::cout << "NO\n";
    }
  }
}
