

#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
// ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//ksiazkaAdresowa.rejestracjaUzytkownika();
//  ksiazkaAdresowa.rejestracjaUzytkownika();
ksiazkaAdresowa.logowanieUzytkownika();
  //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
 // ksiazkaAdresowa.wylogowanieUzytkownika();
  ksiazkaAdresowa.dodajAdresata();

  ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
