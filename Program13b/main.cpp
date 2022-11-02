#include <iostream>

using namespace std;

class String {
private:
    string str;
public:
    void getdata(){
        cout<<"Enter string in user defined datatype "<<endl;
        cin>>str;
    }

    void printString() {
        cout << str << endl;
    }

    String() {
        str = "";
    }

    String(string s) {
        str = s;
    }

    operator string() {
        return str;
    }
};

int main() {
    String s1; //src
    s1.getdata();
    //userdefined to predefined ,op
    string s2 = s1;
    cout << s2 << endl;

    string s3 ;
    cout<<"Enter the string in predefined data type "<<endl;
    cin>>s3;
    //predefined to user defined ,c
    String s4 = s3;
    s4.printString();
    return 0;
}



