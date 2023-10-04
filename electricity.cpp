#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    // cout<<setprecision(3);
    float unit, amount, surcharge;
    cout << "enter unit:";
    cin >> unit;
    if (unit >= 0 && unit < 200)
    {
        amount = unit * 3.20;
    }
    else if (unit >= 200 && unit < 400)
    {
        amount = unit * 4.50;
    }
    else if (unit >= 400 && unit < 600)
    {
        amount = unit * 6.80;
    }
    else if (unit >= 600)
    {
        amount = unit * 9.00;
    }
    else
    {
        cout << "invalid entry:";
        exit(0);
    }
    if (amount < 200)
    {
        amount = 200;
    }
    if (amount >= 1000)
    {
        surcharge = amount * 0.15;
        cout << "unit price : " << amount << endl << "unit surcharge 15% : " << surcharge << endl;
        amount = amount + surcharge;
    }

    cout << "net amount:" <<setprecision(3)<< amount << endl;
    return 0;
}
