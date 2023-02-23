#include <iostream>

using namespace std;

int main()
 {
  int num1, num2;
  cout<<"enter a two numbers :";
  cin>>num1>>num2;
   num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "\n\nValues After Swapping:  \n"<<endl;

    cout << "\nFirst Number = " << num1 <<endl;
    cout << "\nSecond Number = " << num2 <<endl;
    

    return 0;
}
