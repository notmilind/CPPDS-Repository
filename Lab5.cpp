#include <iostream>
using namespace std;
int main()
{
    int Prn,Prn1,Prn2,Prn3,Prn4;

    cout << endl;//To make it look more organised
    cout << "Enter your PRN Number\n";
    cin >> Prn;
    cout << endl;

    Prn1=(Prn-(Prn-(Prn%10000)));
    cout << ((Prn-(Prn%10000))/10000);
    cout << endl;

    Prn2=(Prn1-(Prn1-(Prn%1000)));
    cout << ((Prn1-(Prn1%1000))/1000);
    cout << endl;

    Prn3=(Prn2-(Prn2-(Prn2%100)));
    cout << ((Prn2-(Prn2%100))/100);
    cout << endl;

    Prn4=(Prn3-(Prn3-(Prn3%10)));
    cout << ((Prn3-(Prn3%10))/10);
    cout << endl;

    cout << Prn4;
    cout << endl;
     
}