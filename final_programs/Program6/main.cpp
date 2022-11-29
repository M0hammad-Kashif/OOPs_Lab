#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(){};
    Complex(int _real, int _img);
    Complex operator+=(Complex m)
    {
        real += m.real;
        img += m.img;
        return *this;
    }
    Complex operator-=(Complex m)
    {
        real -= m.real;
        img -= m.img;
        return *this;
    }
    Complex operator*=(Complex m)
    {
        real = real * m.real - img * m.img;
        img = real * m.img + img * m.real;
        return *this;
    }
    Complex operator/=(Complex m)
    {
        real = (real * m.real + img * m.img) / (m.real * m.real + m.img * m.img);
        img = (img * m.real - real * m.img) / (m.real * m.real + m.img * m.img);
        return *this;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};

Complex::Complex(int _real, int _img)
{
    real = _real;
    img = _img;
}

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << " + " << c.img << "i" << endl;
    return out;
}
int main()
{
    Complex c1(1, 2), c2(3, 4);
    cout << "Complex C1: " << c1;
    cout << "Complex C2: " << c2;
    c1 += c2;
    cout << "Complex C1 after c1 += c2: " << c1;
    c1 -= c2;
    cout << "Complex C1 after c1 -= c2: " << c1;
    c1 *= c2;
    cout << "Complex C1 after c1 *= c2: " << c1;
    c1 /= c2;
    cout << "Complex C1 after c1 /= c2: " << c1;
    return 0;
}