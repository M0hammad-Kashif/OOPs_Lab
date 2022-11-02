#include <iostream>

using namespace std;


int swap_int(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;

    return 0;

}

int swap_float(float *a, float *b) {
    float temp;
    temp = *b;
    *b = *a;
    *a = temp;

    return 0;

}

int main() {


    int ch;


    do {
        cout << "1. Swap Integers " << endl << "2. Swap Float " << endl << "3. Exit " << endl;
        cout << " Enter your choice " << endl;

        cin >> ch;


        switch (ch) {
            case 1:

                int a, b;
                cout << "Enter Two Number integer a and b" << endl;

                cin >> a;
                cin >> b;
//                cout << typeid(a).name() << endl;

                swap_int(&a, &b);

                cout << " Value of a : " << a << " value of b is " << b << endl;
                break;
            case 2:
                float c, d;

                cout << "Enter Two Number float c and d" << endl;
                cin >> c;
                cin >> d;

                swap_float(&c, &d);

                cout << " Value of c : " << c << " value of d is " << d << endl;
                break;


            default:

                printf("\n Enter a valid value");
                break;
        }
    } while (ch < 3);


    return 0;
}
