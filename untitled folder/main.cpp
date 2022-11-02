#include <iostream>
#include <string>

using namespace std;

class User {
public:
    int age{};
    string name;

    int input_detail(){
            cout << "Enter your name " << endl;
            cin >> name;
            cout << "Enter your age" << endl;
            cin >> age;
            return 0;
    };

    int display_details() const{
            cout << "Your name is " << name << endl;
            cout << " Your age is "<< age << endl;
        return 0;
    };
};

int main() {
    User user1;
    user1.input_detail();
    user1.display_details();

    return 0;
}
