#include <iostream>
using namespace std;
class Dollar;
class Rupee{
private:
    float r;
public:
    Rupee(){
        r = 0.0;
    }
    Rupee(Dollar d){
        r = d / 82.38;
    }

    void displayRupee{
        cout<<"The value of Rupee is "<<r<<endl;
    };

}
class Dollar{
private: float d;
public:
    Dollar(){
        d = 0.0;

    }
    float returnDollarValue(){
        return d;
    }

    void inputDollarValue(){
        cout<<"Enter the dollar Value"<<endl;
        cin>>d;
    }
};
int main() {
    Rupee r1;
    Dollar d1;

    d1.inputDollarValue();
    r1 = d1;
    r1.displayRupee();
    return 0;
}
