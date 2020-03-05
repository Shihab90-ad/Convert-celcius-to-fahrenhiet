/*@Shihab Sadekatul
1821581
LAB#1 section #3*/
#include<cmath>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    float perimeter,area,radius,p;
    const float PI=3.142;

    cout<<"Enter Radius: ";
    cin>>radius;

    perimeter=2*radius*PI;
    cout<<"Perimeter is "<<setw(5)<<right<<setprecision(3)<<fixed<<perimeter<<endl;
    area=pow(radius,2)*PI;
    cout<<"Area is "<<setw(11)<<right<<setprecision(3)<<fixed<<area<<endl;
    system("pause");
    return 0;
}

