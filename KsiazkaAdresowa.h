#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"


class KsiazkaAdresowa
{
UzytkownikMenedzer uzytkownikMenedzer;
AdresatMenedzer adresatMenedzer;


public:

void rejestracjaUzytkownika();
int logowanieUzytkownika();
void wypiszWszystkichUzytkownikow();
void zmianaHaslaZalogowanegoUzytkownika();
void wylogowanieUzytkownika();

KsiazkaAdresowa(string nazwaPlikuZUzytwkonikami): uzytkownikMenedzer(nazwaPlikuZUzytwkonikami){
  uzytkownikMenedzer.wczytajUzytkownikowZPliku();
};

int dodajAdresata();
void wyswietlWszystkichAdresatow();
};
#endif
