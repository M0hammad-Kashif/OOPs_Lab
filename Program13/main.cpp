#include <iostream>
using namespace std;

class Cstring{
private:
    string s;
public:

    Cstring(string str){
        s = str;
    }

    void showData(){
        cout<<"The data is "<<s<<endl;
    }

};
int main() {
    string str;
    cout<<"Enter a string "<<endl;
    cin >>str;
    Cstring s(str);
    s.showData();

    return 0;
}
