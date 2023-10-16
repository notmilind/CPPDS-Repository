#include <iostream>
using namespace std;
int main()
{   
    int rowsa,colsa,rowsb,colsb;
    cout<<"Enter The no of rows of the matrice-A to be added"<<endl;
    cin>>rowsa;
    cout<<"Enter The no of rows of the matrice-A to be added"<<endl;
    cin>>colsa;
    cout<<"Enter The no of rows of the matrice-B to be added"<<endl;
    cin>>rowsb;
    cout<<"Enter The no of rows of the matrice-B to be added"<<endl;
    cin>>colsb
    if (colsa!=rowsa)
    {
        cout<<"The Entered Matrices cannot be multiplied";
        exit();
    }

    int matrixa[rowsa][j];
    int matrixb[i][j];
    int matrixsum[i][j];

cout<<"Enter The elements of Matrix-A"<<endl;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            cin>>matrixa[i][j];
        }
        cout<<endl;
    }

cout<<"Enter The elements of Matrix-B"<<endl;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            cin>>matrixb[i][j];
        }
        cout<<endl;
    }

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            matrixsum[i][j]=matrixa[i][j]+matrixb[i][j];
            cout<<matrixsum[i][j];
        }
        cout<<endl;
    }
    
}