#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"


class KsiazkaAdresowa
{
UzytkownikMenedzer uzytkownikMenedzer;


public:

void rejestracjaUzytkownika();
int logowanieUzytkownika();
void wypiszWszystkichUzytkownikow();
void zmianaHaslaZalogowanegoUzytkownika();
KsiazkaAdresowa(string nazwaPlikuZUzytwkonikami): uzytkownikMenedzer(nazwaPlikuZUzytwkonikami){
  uzytkownikMenedzer.wczytajUzytkownikowZPliku();
};
};
#endif
