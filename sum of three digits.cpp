/*@Shihab Sadekatul
Matric no:1821581
lab #1 Section #3*/

#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c,d,e,total;
	cout<<"Enter a number between 0 and 1000: ";
	cin>>num;
	a=num%10;
	b=num/10;
	c=b%10;
	d=num/100;
	e=d%10;
	total=a+c+e;
	cout<<"The sum of the digits is "<<total<<endl;
	
	system("pause");
	return 0;
}
