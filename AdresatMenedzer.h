#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "UzytkownikMenedzer.h"
#include "Adresat.h"

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector<Adresat>adresaci;
   // int idZalogowanegoUzytkownika;
    UzytkownikMenedzer uzytkownikMenedzer;

    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:

    AdresatMenedzer();
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);

};

 #endif
