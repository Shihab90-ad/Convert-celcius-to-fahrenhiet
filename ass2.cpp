#include <iostream>
using namespace std;

//declare rows and columns sizes
int const Prow = 3;
int const Pcol = 2;
int const Qrow = 2;
int const Qcol = 3;
int const PQrow = 3;
int const PQcol = 3;
int const N = 3;
//declare all empty arrays here as global
int P[Prow][Pcol], Q[Qrow][Qcol], PQ[PQrow][PQcol];

void multMatrix(int P[Prow][Pcol], int Q[Qrow][Qcol]); //complete your prototype
int findDeterm(int PQ[N][N], int n); //complete your prototype
void getCofactor(int PQ[N][N], int temp[N][N], int p, int q, int n); //another prototype

int main()
{
    //get user input for array values using nested loop
    cout << "Enter values for array P:" <<endl;
    for(int i=0; i<Prow; ++i)
    {
        for(int j=0; j<Pcol; ++j)
        {
            cin >> P[i][j];
        }
    }
    cout << "\nEnter values for array Q:" <<endl;
    for(int i=0; i<Qrow; ++i)
    {
        for(int j=0; j<Qcol; ++j)
        {
            cin >> Q[i][j];
        }
    }
    //call multMatrix() : pass arrays to multiply
    cout << "\nMatrix P x Q is :" << endl;
    multMatrix(P, Q);
    //call findDeterm(): pass multiplied 2d array
    int det = findDeterm(PQ, N);
    //display result of findDeterm
    cout << "\n|PQ| or the determinant of PQ is : " << det << endl;
    return 0;
}

void multMatrix(int P[Prow][Pcol], int Q[Qrow][Qcol])//pass 2 arrays
{
    //create if-else condition in nested loop to determine index position
    if (Prow != Qcol)
    {
        cout << "Multiplication not possible" << endl;
        return;
    }
    //multiply arrays
    for(int i=0; i<Prow; ++i)
    {
        for(int j=0; j<Qcol; ++j)
        {
            for(int k=0; k<Pcol; ++k)
            {
                PQ[i][j] += P[i][k] * Q[k][j];
            }
        }
    }
    //display array
    for(int i=0; i<Prow; i++)
    {
        cout << "|";
        for(int j=0; j<Qcol; j++)
        {
            cout << "\t" << PQ[i][j];
        }
        cout << "\t|" << endl;
    }
}

int findDeterm(int PQ[N][N], int n)//pass 2d array
{
    //more codes here
    int determinant = 0;
    int temp[N][N];
    int sign = 1;

    for (int k=0; k<n; k++)
    {
        getCofactor(PQ, temp, 0, k, n);
        determinant += sign * PQ[0][k] * findDeterm(temp, n-1);
        sign = -sign;
    }
    return determinant;
}

void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
