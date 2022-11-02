#include <iostream>
using namespace std;

class Swap {
public:
    int a,b;
    float x, y;

    void swap_int(){
        int temp=a;
        a=b;
        b=temp;
    }

    void swap_float(){
        float temp=x;
        x=y;
        y=temp;
    }
};

int main() {

    Swap int_num;
    Swap float_num;

//    Integers
    cout <<"Enter Two Integer Number a and b "<< endl;
    cin>>int_num.a>>int_num.b;
    int_num.swap_int();
    cout <<"Integer Number after swapping" <<endl;
    cout<<int_num.a<<" "<<int_num.b<<endl;

//    float
    cout <<"Enter Two Float Number x and y "<< endl;
    cin>>float_num.x>>float_num.y;
    float_num.swap_float();
    cout <<"Float Number after swapping" <<endl;
    cout<<float_num.x<<" "<<float_num.y<<endl;

}