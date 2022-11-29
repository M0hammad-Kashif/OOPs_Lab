#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    int student_id;
    char student_name[30];
    int student_marks;

public:
    void inputData()
    {
        cout << "\t\tEnter Student Details\t\t\n";
        cout << "student_id: ";
        cin >> student_id;
        getchar();
        cout << "Name: ";
        cin.getline(student_name, 30);
        cout << "Marks: ";
        cin >> student_marks;
    }
    void displayData()
    {
        printf("%3d\t%15s\t%3d\n", this->student_id, this->student_name, this->student_marks);
    }
    void update_Data()
    {
        getchar();
        cout << "Update Student student_name (" << student_name << "): ";
        cin.getline(student_name, 30);
        cout << "Update Student student_marks (" << student_marks << "): ";
        cin >> student_marks;
    }
    bool id_comparision(int id)
    {
        return this->student_id == id;
    }
    bool compare_name(char name[])
    {
        return !strcmp(this->student_name, name);
    }
};
int main()
{

    Student s[10];
    int count = 0;
    while (1)
    {
        int ch;
        cout << "1. Add Record\n2. Show All Record\n3. Search\n4. Update Record\n5. Delete Record\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                s[count++].inputData();
                break;
            case 2:
                if (!count)
                {
                    cout << "No record found...\n";
                    break;
                }

                cout << "ID\t\tNAME\tMARKS\n";

                for (int i = 0; i < count; ++i)
                {
                    s[i].displayData();
                }
                break;
            case 3:
                int choice;
                cout << "1. Search by student_id\n2. Search by student_name\n";
                cout << "Enter Choice: ";
                cin >> choice;
                switch (choice)
                {
                    case 1:
                        int id;
                        cout << "Enter StudentID : ";
                        cin >> id;
                        bool flag;
                        flag = true;
                        for (int i = 0; i < count; ++i)
                        {
                            if (s[i].id_comparision(id))
                            {
                                flag = false;
                                s[i].displayData();
                            }
                        }
                        if (flag)
                            cout << "No Record found with StudentID : " << id << endl;
                        break;
                    case 2:
                        char name[30];
                        cout << "Enter Student student_name: ";
                        getchar();
                        flag = true;
                        cin.getline(name, 30);
                        for (int i = 0; i < count; ++i)
                        {
                            if (s[i].compare_name(name))
                            {
                                flag = false;
                                s[i].displayData();
                            }
                        }
                        if (flag)
                            cout << "No Record found with student_name : " << name << endl;
                        break;
                }
                break;
            case 4:
                cout << "Enter Student student_id: ";
                int id;
                cin >> id;
                for (int i = 0; i < count; ++i)
                {
                    if (s[i].id_comparision(id))
                    {
                        s[i].update_Data();
                    }
                }
                break;
            case 5:
                cout << "Enter Student student_id: ";
                cin >> id;
                int index;
                bool flag;
                flag = false;
                for (int i = 0; i < count; ++i)
                {
                    if (s[i].id_comparision(id))
                    {
                        flag = true;
                        index = i;
                    }
                    if (flag)
                    {
                        while (index < count)
                        {
                            s[index] = s[index + 1];
                            index++;
                        }
                        cout << "Student Record deleted with student_id : " << id << endl;
                    }

                    count--;
                }
                break;
            case 6:
                cout << "Exiting..." << endl;
                exit(1);
        }
    }
    return 0;
}