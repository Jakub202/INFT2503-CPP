//-------------------------------------------------------------------
//
// toerpot.cpp
//
// Programmet skriver toerpotenser til fil.
// Alle toerpotenser mindre enn halvparten av
// maksimalverdien til "long int" skrives ut.
//
#include <climits>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main() {
  const int length = 5;

  int low = 0;
  int mid = 0;
  int high = 0;

  double temp;
  cout << "tast inn " << length << " temperaturer" << endl;

  for (int i = 0; i < length; i++) {
    cout << "Tast inn temperatur nummer " << i + 1 << ": ";
    cin >> temp;

    while (cin.fail()) {
      cout << "Ugyldig inndata. Skriv inn en gyldig temperatur: ";
      cin.clear();                                         // Fjerner feilflagg
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Tømmer bufferen
      cin >> temp;
    }

    if (temp < 10) {
      low++;
    } else if (temp > 20) {
      high++;
    } else {
      mid++;
    }
  }

  cout << "Antall under 10 er " << low << endl;
  cout << "Antall mellom 10 og 20 er " << mid << endl;
  cout << "Antall over 20 er " << high << endl;
}
