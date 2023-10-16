#include <iostream>
using namespace std;
int main()
{
    int Mark1,Mark2,Mark3,Mark4,Mark5,Avg;
    
    cout << "Enter your marks one by one";
    cout << endl;
    cin >> Mark1;
    cin >> Mark2;
    cin >> Mark3;
    cin >> Mark4;
    cin >> Mark5;

    Avg=((Mark1+Mark2+Mark3+Mark4+Mark5)/5);

    if (Avg>=90)
    {
        cout << "Your Grade is : O ";
        exit;
    }
    else if (Avg>=85)
    {
        cout << "Your Grade is : A+ ";
        exit;
    }
    else if (Avg>=75)
    {
        cout << "Your Grade is : A ";
        exit;
    }
    else if (Avg>=65)
    {
        cout << "Your Grade is : B+ ";
        exit;
    }
    else if (Avg>=55)
    {
        cout << "Your Grade is : B ";
        exit;
    }
    else if (Avg>=40)
    {
        cout << "Your Grade is : Pass ";
        exit;
    }
    else
    {
        cout << "Your Grade is : Fail ";
        exit;
    }
}
