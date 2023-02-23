#include<iostream>
using namespace std;
int main()
{
    int num, i, factorial=1;
    cout<<"Enter the Number: ";
    cin>>num;
    for(i=num; i>=1; i--)
        factorial = factorial*i;
    cout<<"\nFactorial = "<<factorial;
    cout<<endl;
    return 0;
}
