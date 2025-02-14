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
int main()
{
	return 0;
}

