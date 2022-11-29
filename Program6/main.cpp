#include <iostream>
using namespace std;


class Matrix{
    int m , n ;
    int data[10][10]{};

public:
    static int c;
    Matrix()
    {

    }
    Matrix(const Matrix &object)
    {
        m = object.m;
        n =object.n;
//        data[m][n];
        for(int i=0;i<m;i++)
        {
            for (int j = 0; j < n; j++) {
                data[i][j] = object.data[i][j];
            }
        }
    }

    void getShape(){
        cout <<"Enter the number of rows"<< endl;
        cin>>m;
        cout <<"Enter the number of column"<< endl;
        cin>>n;

    }
    void getData(){
        cout <<"Enter the value in the matrix"<<endl;
//        int m1[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>data[i][j];
            }
        }
    }



    static void *matrixMultiplication(const Matrix &obj1 , const Matrix &obj2)
    {
        int m = obj1.m;
        int n = obj1.n;

        int p = obj2.m;
        int q = obj2.n;

        if(n != p){
            cout<<"Matrix multiplication can't be performed due to invalid shape!"<<endl;
        }

        // create our resultant matrix m3 with shape m,q

        int m3[m][q];

        //  Finding the product of 2 matrices and storing it in a new matrix.
        for(int i = 0; i < m; i++){

            for(int j = 0; j < q; j++){
                m3[i][j] =0 ;
                for(int k = 0; k < n;k++){

                    m3[i][j] += obj1.data[i][k]*obj2.data[k][j];
                    c++;
                }
            }
        }

        // Printing the resultant matrix.
        cout<<"The resultant matrix is : " <<endl;
        for(int i = 0; i<m;i++){
            for(int j = 0; j <q; j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<c<<endl;

    }


};
int Matrix::c=0;

int main(){

    int choice;

    Matrix mat1 ,mat2 ;
    cout <<" 1. Two Matrix Multiplication" <<endl;
    cout <<" 2. Matrix Square" << endl;

    cout<<"Enter the choice"<<endl;
    cin>> choice;
    if (choice == 1){
        mat1.getShape();
        mat1.getData();

        mat2.getShape();
        mat2.getData();

        Matrix::matrixMultiplication(mat1,mat2);

    }
    if ( choice ==2 ){
        mat1.getShape();
        mat1.getData();
        Matrix mat3(mat1);
        Matrix::matrixMultiplication(mat1,mat3);



    }




//    do {
//        cout <<" 1. Two Matrix Multiplication" <<endl;
//        cout <<" 2. Matrix Square" << endl;
//        cout <<" 3. Exit "<<endl;
//        cin>>choice;
//
//        switch (choice) {
//
//            case 1:
//
//                mat1.getShape();
//                mat1.getData();
//
//                mat2.getShape();
//                mat2.getData();
//                Matrix::matrixMultiplication(mat1,mat2);
//
//
//                break;
//
//            case 2:
//                mat1.getShape();
//                mat1.getData();
//
//
//                Matrix::matrixMultiplication(mat1,mat3);
//
//                break;
//
//
//
//            default:
//                cout<<"Enter a valid choice"<<endl;
//                break;
//        }
//
//    } while (choice<2);



//    // shape of m1 matrix
//    int m;
//    int n;
//
//    // shape of m2 matrix
//    int p;
//    int q;
//
//    cout << "Enter the shape of two matrix" << endl;
//    cin>>m>>n>>p>>q;
//
//
//    if(n != p){
//        cout<<"Matrix multiplication can't be performed due to invalid shape!"<<endl;
//    }
//
//    // Init values in m1.
//    cout <<"Enter the value in first matrix"<<endl;
//    int m1[m][n];
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            cin>>m1[i][j];
//        }
//    }
//    // Init values in m2.
//    cout <<"Enter the value in second matrix"<<endl;
//    int m2[p][q];
//    for(int i = 0; i < p; i++){
//        for(int j = 0; j < q; j++){
//            cin>>m2[i][j];
//        }
//    }
//
//    // create our resultant matrix m3 with shape m,q
//
//    int m3[m][q];
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < q; j++){
//            m3[i][j] = 0;
//        }
//    }
//    //  Finding the product of 2 matrices and storing it in a new matrix.
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < q; j++){
//            for(int k = 0; k < n;k++){
//                m3[i][j] += m1[i][k]*m2[k][j];
//            }
//        }
//    }
//
//    // Printing the resultant matrix.
//    cout<<"The resultant matrix is : " <<endl;
//    for(int i = 0; i<m;i++){
//        for(int j = 0; j <q; j++){
//            cout<<m3[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    return 0;
}
