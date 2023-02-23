#include <iostream>
using namespace std;
int main()
{
int arr[5];	
   int num1, num2, num3, num4, num5;
   int max;

   cout << "Enter five numbers: ";
   cin >> num1 >> num2 >> num3 >> num4 >> num5;


max = num1;

   if (num2 > max) 
   {
      max = num2;
   }
   if (num3 > max) {
      max = num3;
   }
   if (num4 > max) {
      max = num4;
   }
   if (num5 > max) 
   {
      max = num5;
   }

   cout << "The maximum number is: " << max << endl;

   return 0;
}






