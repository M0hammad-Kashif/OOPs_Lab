#include <iostream>
using namespace std;

class Time{
private:
    int hr , min;
public:
    Time(int hour,int minute){
        hr =hour;
        min = minute;
    }
    void operator + (Time obj){
        cout << "Performing addition of two time objects" <<endl;
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
    Time t1(04,30) ,t2(2,230);
    t1+t2;
    t1.showData();
    return 0;
}
