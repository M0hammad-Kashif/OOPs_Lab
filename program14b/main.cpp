#include <iostream>
using namespace std;

class Dollar;
class Rupee;

class Rupee{
private:
    float val;
public:
    Rupee(){
        val = 0;
    }
    Rupee(float r){
        val = r;
    }
    void printRupees(){
        cout << "Rupees: " << val << endl;
    }

    void getData(){
        cout<<"Enter the value in rupees"<<endl;
        cin>>val;
    }
    float getValue(){
        return val;
    }
};

class Dollar{
private:
    float val;
public:
    Dollar(){
        val = 0;
    }
    Dollar(float v){
        val = v;
    }
    Dollar(Rupee r){
        val = (r.getValue())/82.38;
    }
    void printDollars(){
        cout << "Dollars: " << val << endl;
    }

    operator Rupee(){
        return Rupee(val*82.38);
    }

    void getData(){
        cout<<"Enter the dollar value" <<endl;
        cin>>val;
    }

};

int main(){
    cout <<"From rupee to dollar" <<endl;
    Dollar d1;
    Rupee r1;
    r1.getData();
    d1 = r1; // constructor overloading
    d1.printDollars();

    Rupee r2;
    cout <<endl<<"From dollar to rupee" <<endl;
    Dollar d2 ;
    d2.getData();
    r2 = d2; //operator overloading
    r2.printRupees();

    return 0;
}