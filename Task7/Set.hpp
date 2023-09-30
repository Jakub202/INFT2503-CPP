#pragma once
#include <iostream>
#include <vector>

class Set {
public:
  Set();                                                              // Constructor for empty set
  Set(const Set &other);                                              // Copy constructor
  Set operator+(const Set &other) const;                              // Union of two sets
  Set &operator=(const Set &other);                                   // Assignment operator
  void insert(int value);                                             // Insert a value into the set
  friend std::ostream &operator<<(std::ostream &out, const Set &set); // Output operator

private:
  std::vector<int> data;
};
