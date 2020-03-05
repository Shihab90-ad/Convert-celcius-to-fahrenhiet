/*@Shihab Sadekatul
1821581
LAB#1 section #3*/
#include<iostream>

using namespace std;
int main()
{
    double miles,kilo,nhour,nminutes,nseconds, hour,minutes,seconds, average;
    cout<<"Enter Miles: ";
    cin>>miles;
    kilo=miles*1.6;
    cout<<"Enter hour, minutes & seconds: ";
    cin>>hour>>minutes>>seconds;
    nseconds=seconds/(60*60);
    nminutes=minutes/60;
    nhour=hour+nminutes+nseconds;
    average=kilo/nhour;
    cout<<"Average is: "<<average<<endl;
    system("pause");
    return 0;
}
