#include <iostream>
#include <ioamanip>
using namepsace std;
const int maxLlogari = 100;
string emrat[maxLlogari];
int numratLlogarive[maxLlogari];
double balanca[maxLlogari];
int llogariTotale = 0;

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
	cout << "Jepni numrin e llogarise: ";
	cin >> numriLlogarise;
	for (int i = 0; i < llogariTotale; i++)
	{
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

