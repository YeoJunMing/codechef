//time limit exceeded
#include <iostream>

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while (t--) {
	    int a, b;
	    std::cin >> a >> b;
	    //find hcf
      int hcf = 0;
	    for (int i = 1; i <= std::min(a,b); i++ ) {
	      if (a % i == 0 && b % i == 0) {    
            hcf = i;       
        }
	    }
	    std::cout << hcf << "\n";
	}
	return 0;
}
