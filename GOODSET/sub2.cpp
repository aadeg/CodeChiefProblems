#include <iostream>

int main(){
  int t, n;
  
  std::cin >> t;
  for (int i = 0; i < t; i++){
    std::cin >> n;
    for (int j = 1; j < (n * 2); j += 2)
      std::cout << j << ' ';
    std::cout << std::endl;
  }
}
