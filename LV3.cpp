// Victoria Levačić Tklaec, 2. B
// LV3

#include <iostream>
#include <string>
using namespace std;

//ZADATAK 1
bool prihvatljivaPoruka(string poruka)
{
    if (poruka.find("#") != string::npos || poruka.size() > 40 || poruka.size() == 0) return false;
    else return true;
}

//ZADATAK 2
bool valjanoMjerenje(double temperatura, char jedinica, bool potvrdeno)
{
    if (temperatura >= -40 && temperatura <= 85 && jedinica == 'C' && potvrdeno == true) return true;
    if (temperatura >= -40 && temperatura <= 185 && jedinica == 'F' && potvrdeno == true) return true;
    return false;
}

//ZADATAK 3
bool kandidatDNA(string dna)
{
    int size = dna.size();
    int a = 0, c = 0, g = 0, t = 0;
    if (size >= 6 && size <= 30)
    {
        for (int i = 0; i < size;i++)
        {
            if (dna.find("A") != string::npos) a++;
            if (dna.find("C") != string::npos) c++;
            if (dna.find("G") != string::npos) g++;
            if (dna.find("T") != string::npos) t++;
        }
        if ((g + c) >= (size / 2)) return true;
    }
    else return false;
}


int main()
{
    //ZADATAK 1
    string poruka; cin >> poruka;
    if (prihvatljivaPoruka(poruka))  cout << "PRIHVACENA\n" << endl;
    else cout << "ODBIJENA\n" << endl; 

    //ZADATAK 2
    double temperatura; char jedinica; bool potvrdeno; cin >> temperatura >> jedinica >> potvrdeno;
    if (valjanoMjerenje(temperatura, jedinica, potvrdeno)) cout << "KORISTI" << endl;
    else cout << "ODBACI" << endl;

    //ZADATAK 3
    string dna;
    if (kandidatDNA(dna)) cout << "DA" << endl;
    else cout << "NE" << endl;
}

