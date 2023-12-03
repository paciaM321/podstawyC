#include <stdio.h>
#include <iostream>


int zamiana(string n)
{
    string odwrot = "";
    for (int i = n.size() - 1; i >= 0; i--)
    {
        odwrot = odwrot + n[i];
    }
    int temp = stoi(odwrot);
    return temp;


}
bool czyPierwsza(int n)
{
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{

    int poj = 0;
    int podw = 0;
    int pot = 0;
    fstream plik;
    string temp;
    int wartosc = 0;
    string tab[11];
    plik.open("przyklad.txt");
    if (plik.good()) {

        for (int i = 0; i < 11; i++) {
            plik >> temp;
            //cout<<temp<<endl;
            if (zamiana(temp) % 17 == 0) cout << zamiana(temp) << endl;
            int temp2 = stoi(temp);
            if (czyPierwsza(temp2) && czyPierwsza(zamiana(temp))) cout << temp << endl;
            tab[i] == temp;

        }
        for (int j = 0; j < 11; j++) {
            string temp3;
            plik >> temp3;
            int temp = 0;
            for (int k = 0; k < 11; k++)
            {
                if (tab[k] == temp3) {
                    temp++;
                }

            }
            if (temp == 1) poj++;
            if (temp == 2)podw++;
            if (temp == 3)pot++;
        }
    }
    cout << poj << " " << podw << " " << pot << endl;
    //cin>>temp;

  //  cout << zamiana(temp) << endl;
    return 0;
}