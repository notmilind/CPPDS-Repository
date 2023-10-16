#include <iostream>
using namespace std;
int main()
{
    int var[5]={1,2,3,4,5};

    for (int i = 0; i <= 4; i++)
    {
        int *ptr=&var[i];
        cout<<var[i]<<"\n";
        cout<<*ptr<<"\n";
        cout<<&var[i]<<"\n";
        cout<<ptr<<"\n";
        cout<<&ptr<<"\n";
    }   
}