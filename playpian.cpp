#include <iostream>
#include <vector>
#include <string>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    std::string input;
    std::cin >> input;
    std::string ans;
    for (int i = 0; i < input.length(); i+=2) {
      if (input.at(i) == input.at(i+1)) {
        ans = "no";
        break;
      }
      else {
        ans = "yes";
      }
    }
    if (ans == "no") {
      std::cout << ans << "\n";
    }
    else {
      std::cout << "yes\n";
    }
  }
}
