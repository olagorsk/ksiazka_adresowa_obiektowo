#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"


class KsiazkaAdresowa
{
UzytkownikMenedzer uzytkownikMenedzer;


public:

void rejestracjaUzytkownika();
void wypiszWszystkichUzytkownikow();
KsiazkaAdresowa(string nazwaPlikuZUzytwkonikami): uzytkownikMenedzer(nazwaPlikuZUzytwkonikami){
  uzytkownikMenedzer.wczytajUzytkownikowZPliku();
};
};
#endif
