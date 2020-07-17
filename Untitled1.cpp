#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int sum = 0, i = 0;
   while (i < 4)
   {
      if(i % 3 == 0)
      {
         cout << setw(5) << '#' ;
         i++;
         continue;
      }
      sum += i;
      cout << setw(5) << sum ;
      i++;
   }
}
