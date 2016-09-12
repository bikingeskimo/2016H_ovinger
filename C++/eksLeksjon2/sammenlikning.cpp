#include <array>
#include <iostream>

using namespace std;

int main() {
  const int lengde = 5;
  int tabell[lengde] = {1, 2, 3, 4, 5};
  int *pekeren = tabell;
  int *slutt = &tabell[lengde]; // adressen rett etter tabellslutt
  while (pekeren < slutt) {
    cout << "Verdien til slutt er " << slutt << ", til pekeren er " << pekeren << endl;
    cout << "Avstanden mellom pekeren og slutt er " << (slutt - pekeren) << endl;
    pekeren++;
  }
  return 0;
}

/* Eksempel utskrift:
Verdien til slutt er 0x7fff54afea44, til pekeren er 0x7fff54afea30
Avstanden mellom pekeren og slutt er 5
Verdien til slutt er 0x7fff54afea44, til pekeren er 0x7fff54afea34
Avstanden mellom pekeren og slutt er 4
Verdien til slutt er 0x7fff54afea44, til pekeren er 0x7fff54afea38
Avstanden mellom pekeren og slutt er 3
Verdien til slutt er 0x7fff54afea44, til pekeren er 0x7fff54afea3c
Avstanden mellom pekeren og slutt er 2
Verdien til slutt er 0x7fff54afea44, til pekeren er 0x7fff54afea40
Avstanden mellom pekeren og slutt er 1
*/
