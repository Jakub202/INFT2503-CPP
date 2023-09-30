#include "Set.hpp"
#include <algorithm>

Set::Set() {}

Set::Set(const Set &other) : data(other.data) {}

Set Set::operator+(const Set &other) const {
  Set result = *this;
  for (int value : other.data) {
    if (std::find(result.data.begin(), result.data.end(), value) == result.data.end()) {
      result.data.push_back(value);
    }
  }
  return result;
}

Set &Set::operator=(const Set &other) {
  if (this != &other) {
    data = other.data;
  }
  return *this;
}

void Set::insert(int value) {
  if (std::find(data.begin(), data.end(), value) == data.end()) {
    data.push_back(value);
  }
}

std::ostream &operator<<(std::ostream &out, const Set &set) {
  out << "{ ";
  for (size_t i = 0; i < set.data.size(); ++i) {
    out << set.data[i];
    if (i < set.data.size() - 1) {
      out << ", ";
    }
  }
  out << " }";
  return out;
}
