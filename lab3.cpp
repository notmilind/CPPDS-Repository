WFHONEY25
    int Var1,Var2,Var3,Result;

    cout << endl;//To make it look more organised
    cout << "Enter a First Value \n";
    cin >> Var1;

    cout << endl;//To make it look more organised
    cout << "Enter a Second Value \n";
    cin >> Var2;

    cout << endl;//To make it look more organised
    cout << "Enter the operation you want to do\n";
    cout << "Enter 1 to Add\n";
    cout << "Enter 2 to Subract\n";
    cout << "Enter 3 to Multiply\n";
    cout << "Enter 4 to Divide\n";
    cin >> Var3;

    if (Var3==1)
    {
        cout << Var1+Var2 << endl;
    }
    else if (Var3==2)
    {
        cout << Var1-Var2 << endl;
    }
    else if (Var3==3)
    {
        cout << Var1*Var2 << endl;
    }
    else if (Var3==4)
    {
        cout << Var1/Var2 << endl;
    }
    else
    {
        cout << "Invalid Input\n";
    }
}