#include <algorithm> // for std::find
#include <iostream>
#include <vector>

int main() {
  // Opprett en vektor av double og legg inn fem tall
  std::vector<double> vec = {1.1, 2.2, 3.3, 4.4, 5.5};

  // Bruk medlemsfunksjonene front() og back()
  std::cout << "Første element: " << vec.front() << std::endl;
  std::cout << "Siste element: " << vec.back() << std::endl;

  // Bruk emplace() til å sette inn et tall etter det første elementet
  vec.emplace(vec.begin() + 1, 1.5);

  // Skriv ut resultatet av front() etterpå
  std::cout << "Første element etter emplace: " << vec.front() << std::endl;

  // Prøv ut STL-algoritmen find()
  double value_to_find = 3.3;
  auto it = std::find(vec.begin(), vec.end(), value_to_find);

  // Sjekk om resultatet av find() er vellykket eller ikke
  if (it != vec.end()) {
    std::cout << "Verdien " << value_to_find << " ble funnet i vektoren." << std::endl;
  } else {
    std::cout << "Verdien " << value_to_find << " ble ikke funnet i vektoren." << std::endl;
  }

  return 0;
}
