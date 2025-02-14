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




int main()
{

	return 0;
}

