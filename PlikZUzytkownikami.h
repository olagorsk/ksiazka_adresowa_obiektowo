#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <sstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

    bool czyPlikJestPusty(fstream plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
     Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
     bool czyPlikZUzytkownikamiJestPusty(fstream &plikTekstowy);
public:

    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami): NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami){};


    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
   vector <Uzytkownik> wczytajUzytkownikowZPliku();
   void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);

};
#endif
