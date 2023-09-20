#include <iostream>
#include <string>

using namespace std;

int main() {
  // a) Les inn tre ord fra brukeren
  string word1, word2, word3;
  cout << "Skriv inn det første ordet: ";
  cin >> word1;
  cout << "Skriv inn det andre ordet: ";
  cin >> word2;
  cout << "Skriv inn det tredje ordet: ";
  cin >> word3;

  // b) Lag en streng og skriv ut
  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << "Setning: " << sentence << endl;

  // c) Skriv ut lengden
  cout << "Lengde av word1: " << word1.length() << endl;
  cout << "Lengde av word2: " << word2.length() << endl;
  cout << "Lengde av word3: " << word3.length() << endl;
  cout << "Lengde av sentence: " << sentence.length() << endl;

  // d) Lag en kopi
  string sentence2 = sentence;

  // e) Bytt ut tegn nr 10-12
  if (sentence2.length() >= 13) {
    sentence2.replace(10, 3, "xxx");
  }
  cout << "sentence: " << sentence << endl;
  cout << "sentence2: " << sentence2 << endl;

  // f) Lagre de fem første tegnene
  string sentence_start;
  if (sentence.length() >= 5) {
    sentence_start = sentence.substr(0, 5);
  }
  cout << "sentence: " << sentence << endl;
  cout << "sentence_start: " << sentence_start << endl;

  // g) Sjekk om "hallo" finnes
  if (sentence.find("hallo") != string::npos) {
    cout << "Setningen inneholder 'hallo'." << endl;
  } else {
    cout << "Setningen inneholder ikke 'hallo'." << endl;
  }

  // h) Finn alle forekomster av "er"
  size_t pos = 0;
  while ((pos = sentence.find("er", pos)) != string::npos) {
    cout << "'er' funnet på posisjon: " << pos << endl;
    pos += 2; // Hopp over denne forekomsten for å finne neste
  }

  return 0;
}
