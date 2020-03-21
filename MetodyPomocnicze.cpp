#include "MetodyPomocnicze.h"



string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}


string MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba)
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}

char MetodyPomocnicze::wczytajZnak()
{
    string wejscie = "";
    char znak = {0};

    while (true)
    {
        getline (cin, wejscie);
        {
            znak = wejscie[0];
            break;
        }
        cout<<"To nie jest znak"<<endl;
    }
    return znak;
}

int MetodyPomocnicze::wczytajLiczbeCalkowita()
{
    string wejscie = "";
    int liczba = 0;

    while (true)
    {
          getline (cin, wejscie);

          stringstream myStream (wejscie);
          if (myStream>>liczba)
              return liczba;
              else
              cout<<"To nie jest liczba. Wpisz ponownie"<<endl;

    }
}

