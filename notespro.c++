#include <iostream>

using namespace std;
int main()
{
    int amount, n2000, r2000, n500, r500, n200, r200, n100, r100;

    cout << "Enter The Price: ";
    cin >> amount;
    n2000 = amount / 2000;
    r2000 = n2000 % 2000;
    n500 = amount / 500;
    r500 = n500 % 500;
    n200 = amount / 200;
    r200 = amount % 200;
    n100 = amount / 100;
    r100 = n100 % 100;
    cout << "2000 rs Notes- " << n2000 << endl;
    cout << "500 rs Notes- " << n500 << endl;
    cout << "200 rs Notes- " << n200 << endl;
    cout << "100 rs Notes- " << n100 << endl;
}
