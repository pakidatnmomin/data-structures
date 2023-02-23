#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  for (int i = 0; i < str.length(); i++)
   {
    if (islower(str[i])) 
	{   
      str[i] = toupper(str[i]);  
    }
  }

  cout << "Uppercase string: " << str << endl;
  return 0;
}
