#include "fraction.hpp"
#include <iostream>

using namespace std;

int main() {
  Fraction fraction1(5, 2);

  Fraction a = fraction1 - 1;

  Fraction b = 1 - fraction1;

  cout << a << endl;

  cout << b << endl;

  return 0;

  /*
   *Gitt av assosiativiteten(som beskrevet i leksjonen) kan vi skrive om uttrykket til
   * ((((5-3)-fraction1)-7)-fraction2)
   *
   *Innerst brukes innebygs heltall operator.
   *
   *På neste brukes ikke-medlemsfunksjonen siden den er på formen int - fraction
   *
   *Deretter brukes medlemsfunksjonen på formen fraction - int
   *
   *Og til slutt kalles medlemsfunksjonen ettersom vi står igjen med fraction - fraction
   */
}
