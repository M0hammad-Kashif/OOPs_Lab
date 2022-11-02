#include <iostream>
using namespace std;

class FuncCall {
private:
    int a, b;
public:
    FuncCall(int num1, int num2) {
        a = num1;
        b = num2;

    }

    void showData(){
        cout<< "Number 1 : "<<a<<endl;
        cout<< "Number 2 : "<<b<<endl;
    }

    int add()  {
        return a + b;
    }

    int operator() (){
            return add();
    }
};

int main() {
    FuncCall F(10,20);
    F.showData();
    int r1 = F();
    cout<<"Result "<<r1<<endl;
    return 0;
}
