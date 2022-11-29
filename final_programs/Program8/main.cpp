#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Base class constructor" << endl;
    }
    // Pure Virtual Function
    virtual void display() = 0;
    // virtual destructor
    virtual ~base()
    {
        cout << "Destructor of base class" << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Derived class constructor" << endl;
    }
    void display()
    {
        cout << "Derived class display function" << endl;
    }

    // destructor
    ~derived()
    {
        cout << "Derived class destructor" << endl;
    }
};

// overloading through friend function
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex operator+(complex, complex);
    friend ostream &operator<<(ostream &, complex);
};

complex operator+(complex c1, complex c2)
{
    complex temp(0, 0);
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

ostream &operator<<(ostream &out, complex c)
{
    out << c.a << " + " << c.b << "i" << endl;
    return out;
}
int main()
{
    base *b;
    derived d;
    b = &d;
    b->display();
    complex c1(2, 3), c2(4, 5), c3(0, 0);
    c3 = c1 + c2;
    cout << c3;
    return 0;
}
