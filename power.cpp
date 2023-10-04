#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, result;
    cout << "enter value:" << endl;
    cin >> x;
    cout << "enter power:" << endl;
    cin >> y;
    result = pow(x, y);
    cout << "value iS = " << result<<endl;
    return 0;
}