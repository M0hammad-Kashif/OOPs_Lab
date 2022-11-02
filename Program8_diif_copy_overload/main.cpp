#include <iostream>
using namespace std;

class Test{
private:
    int value;

public:
    Test(int a){
        value = a;
    }
//    copy constructor
    Test(const Test &obj)
    {
        cout<<"Calling copy constructor"<<endl;
        value = obj.value;
    }
//
    void operator == (const Test &obj)
    {
        if (value == obj.value)
            cout<<"The values are equal"<<endl;
        else
            cout<<"The values are not equal"<<endl;
    }

    void showData() {
        cout<<"The value is "<<value<<endl;
    }


};
int main() {
    Test t1(10);
    cout<< "Displaying the content of t1 : "<< endl;
    t1.showData();

//    using copy constructor
    Test t2(t1);
    cout << "Displaying the content of t2 using copy constructor :"<<endl;
    t2.showData();

    cout<<"Comparing t1 & t2 "<<endl;
    t2 == t1;

    cout<<"Comparing t1 & t3 "<<endl;
//    creating another object
    Test t3(0);
    t3==t1;

////    using operator overloading
//
//    Test t3(0);
//    cout<< "Displaying the content of t3 Before using operator overloading : "<< endl;
//    t3.showData();
//    t3 =t1;
//    cout<< "Displaying the content of t3 After using operator overloading :"<< endl;
//
//    t3.showData();





    return 0;
}
