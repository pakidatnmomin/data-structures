#include <iostream>
using namespace std;
int main()
{
   int num1, num2, num3, num4, num5;
   int min;

   cout << "Enter int arr[5];	
five numbers: ";
   cin >> num1 >> num2 >> num3 >> num4 >> num5;


min = num1;

   if (num2 < min)
    {
      min = num2;
   }
   if (num3 < min) 
   {
      min = num3;
   }
   if (num4 < min)
    {
      min = num4;
   }
   if (num5 < min) {
      min = num5;
   }

   cout << "The minimum number is: " << min << endl;

   return 0;
}






