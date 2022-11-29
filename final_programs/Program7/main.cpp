#include <iostream>
using namespace std;

class Dollar
{
public:
    float amount;
    Dollar(){};
    Dollar(float _amount) // normal amount in dollar
    {
        amount = _amount;
    }
    friend ostream &operator<<(ostream &out, Dollar &d); // to print
};
class Rupee
{
public:
    float amount;
    Rupee(){};
    Rupee(float _amount) // normal amount in rupee
    {
        amount = _amount;
    }
    operator Dollar() // case 1 : type conversion from rupee to dollar d1 = r1 conversion in source class
    {
        Dollar d;
        d.amount = amount / 82.32;
        return d;
    }
    Rupee(Dollar &d) // case 2: type conversion from dollor to rupee r2 = d2
    {
        amount = 82.32 * d.amount;
    }
    friend ostream &operator<<(ostream &out, Rupee &r); // to print
};
ostream &operator<<(ostream &out, Rupee &r)
{
    out << r.amount;
    return out;
}

ostream &operator<<(ostream &out, Dollar &d)
{
    out << d.amount;
    return out;
}

int main()
{
    float amount;
    cout << "Enter amount in Rupees : ";
    cin >> amount;
    Rupee r1(amount); // rupee with given amount
    Dollar d1;
    d1 = r1; // destination d1 and source r1
    cout << r1.amount << " Rupees in Dollars -> " << d1 << endl;
    cout << "Enter amount in Dollar : ";
    cin >> amount;
    Dollar d2(amount); // dollar with given amount
    Rupee r2;
    r2 = d2; // destination r2 and source d2
    cout << d2.amount << " Dollar in Rupees -> " << r2 << endl;
    return 0;
}