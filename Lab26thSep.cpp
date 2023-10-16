#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the age\n";
    cin >> x;
    try
    {
        if (x<16)
        {
            throw("You are not old enough to use this app. Go do your homework kiddo.");
        }
        else if (16<=x&&x<=18)
        {
            throw(x);
        }
            cout<<"You can proceed"<<endl;
    }
    catch(const char * messages)
    {
       cout<<messages;
    }
     catch(int messages)
    {
       cout<<messages;
    }
}