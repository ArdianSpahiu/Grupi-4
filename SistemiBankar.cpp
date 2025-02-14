#include <iostream>
#include <ioamanip>
using namepsace std;
const int maxLlogari = 100;
string emrat[maxLlogari];
int numratLlogarive[maxLlogari];
double balanca[maxLlogari];
int llogariTotale = 0;
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



int main()
{
	return 0;
}

