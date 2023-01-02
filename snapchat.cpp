#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i <  n; i++) {
      std::cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> arr2[i];
    }
    int streak = 0, maxstreak = 0;
    for (int i = 0; i < n; i++) {
      if (arr1[i] != 0 && arr2[i] != 0) {
        streak++;
        if (streak > maxstreak)
          maxstreak = streak;
      } 
      else {
        streak = 0;
      }
    }
    std::cout << maxstreak << "\n";
  }
}
