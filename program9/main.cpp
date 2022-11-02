#include <iostream>
using namespace std;

// overloading Bitwise Operator

class Bitwise{
private:
    int num1 ;
public:

    Bitwise(int a){
        num1 = a;
    }
    void showData(){
        cout<<"The value private data member is : "<<num1<<endl;
    }

    int operator & (int number) {
        return num1 & number;
    }

    int operator | (int number){
        return num1 | number;
    }
    int operator ~ (){
        return ~num1 ;
    }

};
int main() {
    Bitwise N(3);
    N.showData();
    int r1 = N&10;
    int r2 = N|20;
    int r3 = ~N;

    cout<<"Applying Operator Overloading on '&' "<< r1 <<endl;
    cout<<"Applying Operator Overloading on '|' "<< r2 <<endl;
    cout<<"Applying Operator Overloading on '~' "<< r3 << endl;

    return 0;
}
