#include "Set.hpp"
#include <iostream>

int main() {
  Set set1;
  Set set2;

  set1.insert(1);
  set1.insert(4);
  set1.insert(3);

  set2.insert(4);
  set2.insert(7);

  Set unionSet = set1 + set2;

  std::cout << "Set 1: " << set1 << std::endl;
  std::cout << "Set 2: " << set2 << std::endl;
  std::cout << "Union: " << unionSet << std::endl;

  return 0;
}
