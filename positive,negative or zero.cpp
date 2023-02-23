#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the number" << endl;
    cin>>num1;
    if(num1>0)
	{
    cout<<num1<<" is a positive number";
}
else if(num1<0)
{
    cout<<num1<<" is a Negative number";
}
else if(num1==0)
{
    cout<<"You entered Zero";
}
else
cout<<num1<<"not a positive,negative or zero";
getch();
    return 0;
}
