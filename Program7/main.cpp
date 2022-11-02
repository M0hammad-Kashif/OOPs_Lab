#include <iostream>
using namespace std;

// arithmatic operator overloading

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



    void matrixMultiplication(const Matrix &obj1 , const Matrix &obj2)
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

    void operator + (const Matrix &obj1)
    {
        int row = obj1.m;
        int col = obj1.n;

        int sumMatrix[row][col];

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                sumMatrix[i][j] = obj1.data[i][j] + data[i][j];
            }
        }

        cout<<"Printing the resultant matrix after addition"<<endl;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<sumMatrix[i][j] <<"\t";
            }
            cout<<endl;
        }

    }

    void operator * (const Matrix &obj1)
    {
        int p = obj1.m;
        int q = obj1.n;

        if(n != p){
            cout<<"Matrix multiplication can't be performed due to invalid shape!"<<endl;
            return;
        }


        int m3[m][q];

        //  Finding the product of 2 matrices and storing it in a new matrix.
        for(int i = 0; i < m; i++){

            for(int j = 0; j < q; j++){
                m3[i][j] =0 ;
                for(int k = 0; k < n;k++){

                    m3[i][j] += obj1.data[i][k]*data[k][j];

                }
            }
        }

        cout<<"The resultant matrix is : " <<endl;
        for(int i = 0; i<m;i++){
            for(int j = 0; j <q; j++){
                cout<<m3[i][j]<<" ";
            }
            cout<<endl;
        }

    }


};
int main() {

    Matrix mat1 ,mat2 ;
    mat1.getShape();
    mat1.getData();

    mat2.getShape();
    mat2.getData();

    cout<<"Addition"<<endl;
    mat1 + mat2;

    cout<<"Multiplication"<<endl;

    mat1 * mat2;
    return 0;
}
