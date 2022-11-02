#include <iostream>

using namespace std;

class Employee{
private:
    int id;
    string name;
    float salary;
    int age;
    string gender;
    string location;
    int searchID;
    int flag=0;

public:
    int getData(){
        cout <<" Enter Employee ID "<< endl;
        cin>>id;
        cout <<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter Salary"<<endl;
        cin>>salary;
        cout <<"Enter age" <<endl;
        cin>>age;
        cout<<"Enter Gender"<<endl;
        cin>>gender;
        cout<<"Enter Location"<<endl;
        cin>>location;

        return 0;
    }
    int showData(){


//        cout<<"Name is : "<<name<<endl;
//        cout<<"Employee ID is : "<<id<<endl;
//        cout<<"Salary is : "<<salary<<endl;
//        cout<<"Age is : "<<age<<endl;
//        cout<<"Gender is "<<gender<<endl;
//        cout<<"Location is "<<location<<endl;

        cout<<"|"<<" "<<id<<"\t | "<<name<<"\t | "<<gender<<"\t | "<<age<<"\t | "<<salary<<"\t | "<<location<<endl;



        return 0;

    }

    int searchEmployeeByID(int nEmp,Employee emp[],int dEmp[]){
        cout<< "Enter the employee ID to be searched"<<endl;
        cin>>searchID;

        for(int i=0;i<nEmp;i++)
        {
            if(dEmp[i]==-1)
                break;
            if(emp[i].id == searchID)
                flag=i;
        }

        emp[flag].showData();

        return 0;

    }

    int deleteEmployee(int nEmp,Employee emp[],int dEmp[]){
        cout <<"Enter the employee ID"<<endl;
        cin>>searchID;

        for(int i=0;i<nEmp;i++)
        {
            if(emp[i].id == searchID)
                flag=i;
        }

        dEmp[flag] =-1;

        return 0;

    }

    int sortByID(int nEmp,Employee emp[],int dEmp[]){

        for(int i=0;i<nEmp;i++)
        {
            for(int j=i+1;j<nEmp;j++)
            {
                if(emp[i].id>emp[j].id)
                {
                    swap(emp[i],emp[j]);
                }
            }
        }

        return 0;
    }

    int sortBySalary(int nEmp,Employee emp[],int dEmp[]){
        for(int i=0;i<nEmp;i++)
        {
            for(int j=i+1;j<nEmp;j++)
            {
                if(emp[i].salary>emp[j].salary)
                {
                    swap(emp[i],emp[j]);
                }
            }
        }

        return 0;
    }

    int sortByName(int nEmp,Employee emp[],int dEmp[]){
        for(int i=0;i<nEmp;i++)
        {
            for(int j=i+1;j<nEmp;j++)
            {
                if(emp[i].name>emp[j].name)
                {
                    swap(emp[i],emp[j]);
                }
            }
        }

        return 0;
    }




};
int nEmp;
int dEmp[100];

int main() {
    int choice;
    cout<<"Enter the Number of Employee"<<endl;
    cin>>nEmp;
    Employee emp[nEmp];

    do {


        cout<<"1. Input details of employees"<<endl;
        cout<<"2. Display all employee details"<<endl;
        cout<<"3. Display employee detail by employee ID"<<endl;
        cout<<"4. Delete Employee"<<endl;
        cout<<"5. Sort By Employee ID"<<endl;
        cout<<"6. Sort By Employee Salary"<<endl;
        cout<<"7. Sort By Name "<<endl;
//        cout<<"8. "
        cout<<"9. Exit"<<endl;


        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice) {
            case 1:
                for (int i=0;i<nEmp;i++){
                    emp[i].getData();

                }
//                nEmp++;
//                emp[nEmp-1].getData();

                break;
            case 2:
                cout<<"-------------------------------------------------------"<<endl;
                for (int j = 0; j < nEmp; j++) {
                    if(dEmp[j]==0)
                        emp[j].showData();
                }
                cout<<"-------------------------------------------------------"<<endl;
                break;
            case 3:

                emp[1].searchEmployeeByID(nEmp,emp,dEmp);


                break;
            case 4:

                emp[1].deleteEmployee(nEmp,emp,dEmp);
                break;

            case 5:
                emp[1].sortByID(nEmp,emp,dEmp);
                break;
            case 6:
                emp[1].sortBySalary(nEmp,emp,dEmp);
                break;
            case 7:
                emp[1].sortByName(nEmp,emp,dEmp);
                break;
        }
    }while(choice<8);
    return 0;
}
