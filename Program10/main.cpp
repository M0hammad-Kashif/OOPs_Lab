#include<iostream>

using namespace std;

class subscript {
    int a[5]{};
public:

    void setData() {
        cout<<"Enter the data in the object"<<endl;
        for (int & i : a) {
            cin >>i ;
        }
    }

    int &operator[](int i) {
        return a[i];
    }
};

int main() {
    int idx , r1;
    subscript s;
    s.setData();
    cout <<" Enter the index you want to access"<<endl;
    cin>>idx;

    r1 = s[idx];

    cout<<"The element is : "<< r1 <<endl;


    return 0;
}