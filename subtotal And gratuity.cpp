/*@Shihab Sadekatul
Matric no:1821581
lab #1 Section #3*/

#include<iostream>
using namespace std;
int main()
{
	float sub,gra,Agra,Tsub,x=100;
	cout<<"Enter the subtotal and a gratuity rate: ";
	cin>>sub>>gra;
	Agra=(sub*gra)/x;
	Tsub=sub+Agra;
	cout<<"The gratuity is $"<<Agra<< " and total is $"<<Tsub<<endl;
	
	system("pause");
	return 0;
}
