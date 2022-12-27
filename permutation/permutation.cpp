#include <iostream>
#include <algorithm>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int length;
    std::cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++) {
      std::cin >> arr[i];
    }
    std::sort(arr, arr + length);
    int answer = 0;
    
    for (int j = 0; j < length; j++) {
      answer += j + 1 - arr[j];
      
      if (arr[j] > j + 1) {
        answer = -1;
        std::cout << answer << "\n";
        break;
      } 
    }
    
    if (answer != -1) {
      std::cout << answer << "\n";
    }
  }
}
