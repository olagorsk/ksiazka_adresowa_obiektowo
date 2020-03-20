

#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int _main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");



    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();


    return 0;
}



#include "AdresatMenedzer.h"

int main()
{
    AdresatMenedzer adresatMenedzer("Adresaci.txt", 3);
    // adresatMenedzer.dodajAdresata();
    // adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();

    return 0;

}
