//unable to add in the test case function as the stoi function wouldnt work but code works fine

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() { 
  std::string input;
  std::vector<int> minimum;
  while (getline(std::cin, input)) {
    size_t space = input.find(' ');
    int items = stoi(input.substr(0, space));
    int minfresh = stoi(input.substr(space + 1));
    //std::cout << minfresh << " " << items << "\n";
    minimum.push_back(minfresh); //to hold the value of minfresh 
    break;
  }
    
  std::string fresh;
  std::vector<int> freshness;
  int x;
  getline(std::cin, fresh);
  std::istringstream iss1(fresh);
  while (iss1 >> x) {
    freshness.push_back(x);
  }  
  //for (int i : freshness) {std::cout << i << " ";}
  //std::cout << "\n";
  
  std::string dollar;
  std::vector<int> cost;
  int y;
  getline(std::cin, dollar);
  std::istringstream iss2(dollar);
  while (iss2 >> y) {
    cost.push_back(y);
  }
  //for (int j : cost) {std::cout << j << "-";}
  //std::cout << "\n";
  
  int sum = 0;
  int size = freshness.size();
  //std::cout << minimum[0];
  for (int w = 0; w <= size; w++) {  
    if (freshness[w] >= minimum[0]) {
      sum += cost[w];
    }
  }
  std::cout << sum;
}
