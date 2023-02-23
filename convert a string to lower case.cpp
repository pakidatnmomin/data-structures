#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   char string[100];
 
   cout<<"Input a string to convert to lower case"<<endl;
   cin.getline(string, 100);
 
   cout<<"Character in lowercase:"<< strlwr(string);
   
 
   return  0;
}
