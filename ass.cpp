#include <iostream>

using namespace std;

const int r1=3;
const int c1=2;
const int r2=2;
const int c2=2;

int sum;
int M[r1][c1];
int N[r2][c2];
int MN[r1][c2];

void mulMatrix(int M[r1][c1],int N[r2][c2], int MN[r1][c2]);
int calcTotal(int MN[r1][c2]);


int main()
{
	cout<<"Enter values for array M: "<<endl;

	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			cin>>*(*(M+i)+j);
		}
	}

    cout<<endl;
	cout<<"Enter values for array N: "<<endl;

	for(int i=0; i<r2; i++)
	{
		for(int j=0; j<c2; j++)
		{
			cin>>*(*(N+i)+j);
		}
	}

	cout<<endl;

	mulMatrix(M,N,MN);

	cout<<endl;

	calcTotal(MN);

	cout<<"The sum of elements in MNT is : "<<sum<<endl;

}

void mulMatrix(int M[r1][c1],int N[r2][c2], int MN[r1][c2])
{
    cout<<"Matrix M x N is:"<<endl;;

	for(int i=0; i<r1; i++)
	{
	    cout << "| " ;

		for(int j=0; j<c2; j++)
		{
			
			for(int k=0; k<c1; ++k)
			{
				MN[i][j] += (*(*(M+i)+k)) * (*(*(N+k)+j));   //M[i][k] * N[k][j] ;
			}
			cout <<"  "<<MN[i][j];
			
			
            if(j == c2-1)
            cout << endl;
            //cout<<"|";
		}
		
	}
	
}
    

int calcTotal(int MN[r1][c2])
{

    for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
        {
            sum += MN[i][j];
        }
	}
    return sum;
}


