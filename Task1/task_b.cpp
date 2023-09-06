#include <fstream>
#include <iostream>
#include <limits>

using namespace std;

// Funksjonsdeklarasjon
void read_temperatures(double temperatures[], int length);

int main() {
  const int length = 5;
  double temperatures[length];

  // Les inn temperaturer fra fil
  read_temperatures(temperatures, length);

  int low = 0;
  int mid = 0;
  int high = 0;
  double temp;
  // Kategoriser temperaturer
  for (int i = 0; i < length; ++i) {
    temp = temperatures[i];
    if (temp < 10) {
      low++;
    } else if (temp > 20) {
      high++;
    } else {
      mid++;
    }
  }

  // Skriv ut resultat
  cout << "Antall under 10 er " << low << endl;
  cout << "Antall mellom 10 og 20 er " << mid << endl;
  cout << "Antall over 20 er " << high << endl;

  return 0;
}

// Funksjonsdefinisjon
void read_temperatures(double temperatures[], int length) {
  ifstream file;
  file.open("temperatures.txt");
  if (!file) {
    cout << "Kunne ikke åpne filen." << endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; ++i) {
    file >> temperatures[i];
    if (file.fail()) { // Check if the stream is in a good state
      cout << "Ugyldig verdi på linje " << (i + 1) << endl;
      exit(EXIT_FAILURE);
    }
  }

  file.close();
}
