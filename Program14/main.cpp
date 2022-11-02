#include <iostream>
using namespace std;

class Rupee{
private:
    float r;
public:
    Rupee(){
        r = 0.0;
    }

    Rupee(float rs){
        r = rs;
    }
    float returnRupee()
    {
        return r;
    }
    void showData(){
        cout<<"The rupee is : "<< r<<endl;
    }
};

class Dollar{
private:
    float d;
public:
    Dollar(){
        d = 0.0;
    }
    Dollar(float dr){
        d= dr;
    }

    operator Rupee(){
        return (Rupee(d*82.38));
    }

    void getData(){
        cout<<"Enter The dollar value" <<endl;
        cin>>d;
    }

};
int main() {
//    dollar to rupee convesion
    Dollar d1;
    Rupee r1;
    d1.getData();
    r1 = d1;
    r1.showData();
    return 0;
}
