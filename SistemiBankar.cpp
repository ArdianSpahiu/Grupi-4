#include <iostream>
#include <ioamanip>
using namepsace std;
const int maxLlogari = 100;
string emrat[maxLlogari];
int numratLlogarive[maxLlogari];
double balanca[maxLlogari];
int llogariTotale = 0;
int main()
{
	int zgjedhja;
    do
    {
        cout<<"1. Krijo Logari"<<endl;
        cout<<"2. Depozito Para"<<endl;
        cout<<"3. Terhiq Para"<<endl;
        cout<<"4. Kerko Lloagri"<<endl;
        cout<<"5. Shfaq Llogarite"<<endl;
        cout<<"6. Mbyll programin"<<endl;
        cout<<"Zgjedhja";
	    cin>>zgjedhja;
        switch (zgjedhja)
        {
            case 1: krijollogari();
            break;
            case 2: depozitoPara();
            break;
            case 3: terhiqPara();
            break;
            case 4: kerkoLlogarine();
            break;
            case 5: shfaqLlogarite();
            break;
            case 6: cout<<"Programi po mbyllet....."<<endl;
            break;
            default: cout<<"Zgjedhje invalide! Ju lutem zgjidhni 1-6"<<endl;
            break;
        }
    
    }
   while(zgjedhja!=6);
	return 0;
}

