#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

class AdresatMenedzer
{
   const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector<Adresat>adresaci;

   PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();

    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();



public:

    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    :plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }
    void dodajAdresata();

    void wyswietlWszystkichAdresatow();

    void usunAdresata();

    void edytujAdresata();
};

 #endif
