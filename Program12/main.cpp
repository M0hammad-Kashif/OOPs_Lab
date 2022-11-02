#include<iostream>
using namespace std;

class OperatorNew{
    int a;
public:
    OperatorNew(int x){
        a=x;
    }

    void showData(){
        cout<<"The value of private data member is : "<<a<<endl;
    }
    void* operator new(size_t size){
        cout<<"Overloading `new` operator "<<endl;
        void *p=malloc(size);
        return p;
    }
    void operator delete(void *p){
        cout<<"Overloading `delete` operator "<<endl;
        free(p);
    }
};

int main(){
    OperatorNew *p=new OperatorNew(10);
    p->showData();
    delete p;
    return 0;


}