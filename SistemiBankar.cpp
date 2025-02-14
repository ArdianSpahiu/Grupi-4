#include <iostream>
#include <ioamanip>
using namepsace std;
const int maxLlogari = 100;
string emrat[maxLlogari];
int numratLlogarive[maxLlogari];
double balanca[maxLlogari];
int llogariTotale = 0;
//Ky eshte funksioni qe u mundeson perdoruesve te terheqin para
void terhiqPara()
{
    int numriLlogarise;
    double shuma;
    cout << "Jepni numrin e llogarise";
    cin >> numriLlogarise;
    for (int i = 0;i < llogariTotale;i++)
    {
        
        if (numratLlogarive[i] == numriLlogarise)
        {
            //nese ekziston numri i llogarise

        shuma1: cout << "Jepni shumen te cilen doni ta terhiqni! ";
            cin >> shuma;
            if (shuma > 0 && balanca[i] >= shuma)
            {
                balanca[i] -= shuma;
                cout << "Parate u terhiqen me sukses!" << endl;
            }
            else
                // nese shuma eshte me vogel se 0 ose llogaria nuk ka para te mjaftueshme
                cout << "Nuk keni para te mjaftushme ose shume invalide!" << endl;
            goto shuma1;
        }
    }
    cout << "Llogaria nuk u gjet!" << endl;
}
int main()
{
	return 0;
}

