#include <iostream>
using namespace std;
/*

 Program 3: Write a C++ program to perform the addition of two time objects in hour and minute
format, display the result in hour: minute format using object as a function argument.

 */

class Time{
private:
    int hr , min;
public:
    Time(){
        hr=0;
        min=0;
    }
    Time(int hour,int minute){
        hr =hour;
        min = minute;
    }
    void operator + (Time obj){
        min = min + obj.min;
        int r = min/60;
        if(r)
            min = min%60;
        hr = hr + obj.hr+r;
    }
    void showData() const{
        cout << hr <<" hr : "<< min<<" mins"<<endl;
    };

};

int main() {
    Time t1(04,30) ,t2(2,230) ,t3;
    t1+t2;
    t1.showData();
    return 0;
}
