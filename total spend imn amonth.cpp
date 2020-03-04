//Sadekatul Shihab-1821581

#include <iostream>
using namespace std;
float week=7.00;
int main()
{
	int number;
	float price,spend,new_week,month,day;
    cout <<"Enter Price of  Item(RM):  ";
    cin>>price;
    cout <<"Enter Number of Item:      ";
    cin>>number;
   	cout <<"Enter Number of Day:       ";
    cin>>day;
    cout <<"Enter Number of Month:     ";
    cin>>month;
    new_week=(day*month)/week;
	spend=price*number*new_week;
	cout<<"Total Spend Is(RM):         "<<spend<<endl;
	system("pause");
	return 0;

}

