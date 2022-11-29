#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    string address;

public:
    Person(string _name, string _address)
    {
        name = _name;
        address = _address;
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public Person
{
protected:
    float percentage;

public:
    Student(string _name, string _address, float _percentage) : Person(_name, _address)
    {
        percentage = _percentage;
    }
    void getData()
    {
        cout << "***Student Details***";
        Person::getData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Staff : public Person
{
protected:
    float salary;

public:
    Staff(string _name, string _address, float _salary) : Person(_name, _address)
    {
        salary = _salary;
    }
    void getData()
    {
        cout << "***Staff Details***";
        Person::getData();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    string name, address;
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter address: ";
    getline(cin, address);

    float percentage;
    cout << "Enter Percentage: ";
    cin >> percentage;

    Student s(name, address, percentage);
    s.getData();
    getchar();

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter address: ";
    getline(cin, address);

    float salary;
    cout << "Enter salary: ";
    cin >> salary;

    Staff st(name, address, salary);
    st.getData();
    return 0;
}