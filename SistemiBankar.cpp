#include <iostream>
#include <ioamanip>
using namepsace std;
const int maxLlogari = 100;
string emrat[maxLlogari];
int numratLlogarive[maxLlogari];
double balanca[maxLlogari];
int llogariTotale = 0;

void shfaqLlogarite()
{
    if(llogariTotale==0)
    {
        cout<<"Nuk ka llogari!";
        return;
    }
    cout<<"Lista e llogarive:\n"<<left<<setw(15)<<"Emri"<<setw(15)<<"Nr.Llogarise"<<"Balanca\n";
    cout<<"------------------------------------------"<<endl;
    for(int i=0;i<llogariTotale;i++)
    {
        cout<<left<<setw(15)<<emrat[i]<<setw(15)<<numratLlogarive[i]<<"$"<<fixed<<setprecision(2)<<balanca[i]<<endl;
    }
}


void depozitoPara()  //Lejon perdoruesit e depozitojne para ne llogarite e tyre ekzistuese.
{
	int int numriLlogarise;
	double shuma;
  cout << "Jepni numrin e llogarise: ";
	cin >> numriLlogarise;
	for (int i = 0; i < llogariTotale; i++)
	{

		if (numratLlogarive[i] == numriLlogarise)
		{
		shuma1: cout << "Jepni shumen te cilen doni ta depozitoni: ";
			cin >> shuma;
			if (shuma > 0)  //Shuma e depozituar duhet te jete me e madhe se zero
			{
				balanca[i] += shuma;
				cout << "Parate u depozituan me sukses!" << endl;
			}
			else
				cout << "Shume invalide!" << endl; //Nese perdoruesi jep nje shume me te vogel se zero
			goto shuma1;
		}
	}
	cout << "Llogaria nuk u gjet!" << endl; //Rasti kur numri i llogaris nuk eshte valid
}


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
void krijollogari()     //Lejon perdoruesit qe te krijojne nje llogari te re
{


	if (llogariTotale>=maxLlogari)
	{
		cout << "Sistemi nuk pranon me shume perdorues tani per tani!" << endl;
		return;
	}
	cout << "Jep Emrin e llogarise se perdoruesit: ";
	cin >> emrat[llogariTotale];
	cout << "Jep numrin e llogarise: ";
	cin >> numratLlogarive[llogariTotale];
	balanca[llogariTotale++] = 0;
	cout << "Llogaria u krijua me sukses!" << endl;

}

void kerkoLlogarine() //I'u mundeson perdoruesve te kerkojne nje llogari unike permes numrit te llogarise
{
	int numriLlogarise;
		if (numratLlogarive[i] == numriLlogarise) //Nese numri i loogarise ekziston  
		{
			cout << "Emri i mbajtesit te llogarise: " << emrat[i] << endl;
			cout << "Numri i llogarise: " << numratLlogarive[i] << endl;
			cout << "Balanca: $" << fixed << setprecision(2) << balanca[i] << endl;//Shfaqen te dhenat te cilat i perkasin numrit te llogarise te cilin e ka dhene perdoruesi
			return;
			
		}
	} 
	cout << "Llogaria nuk u gjet!" << endl;  //Rasti kur numri i dhene nuk eshte valid apo nuk ekziton  
}

int main()
{

	return 0;
}

