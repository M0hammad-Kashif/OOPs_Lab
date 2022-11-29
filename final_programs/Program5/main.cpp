
#include <iostream>
#include <vector>
using namespace std;

class Account_holder
{
private:
    string name;
    string account_number;

public:
    Account_holder(){};
    Account_holder(string _name, string _account_number)
    {
        name = _name;
        account_number = _account_number;
    }
    friend bool operator==(string s, Account_holder a);
    friend ostream &operator<<(ostream &out, Account_holder a);
};
bool operator==(string s, Account_holder a)
{
    return (s == a.account_number or s == a.name);
}

ostream &operator<<(ostream &out, Account_holder a)
{
    out << "Name: " << a.name << endl;
    out << "Account Number: " << a.account_number << endl;
    return out;
}
class AccountBook
{
private:
    vector<Account_holder> account_table;

public:
    AccountBook(){};
    void add_account(Account_holder a)
    {
        account_table.push_back(a);
    }
    Account_holder operator[](string s)
    {
        for (int i = 0; i < account_table.size(); i++)
        {
            if (s == account_table[i])
            {
                return account_table[i];
            }
        }
        return Account_holder();
    }
};

int main()
{
    AccountBook ab;
    int choice;
    string name, account_number;
    while (true)
    {
        cout << "1. Add Account" << endl;
        cout << "2. Search Account" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter name: ";
                getchar();
                getline(cin, name);
                cout << "Enter account number: ";
                getline(cin, account_number);
                ab.add_account(Account_holder(name, account_number));
                break;
            case 2:
                cout << "Enter name or account number: ";
                getchar();
                getline(cin, name);
                cout << ab[name];
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}