#include<iostream>
using namespace std;
int main()
{
    int a=0, b=1, c, size, temp, i;
    cout<<"Enter the Size of Fibonacci Sequence: ";
    cin>>size;
    cout<<"\nFibonacci Series of "<<size<<" Terms:\n..........n";
    for(i=1; i<=size; i++)
    {
        if(i==1)
            c = 0;
        else if(i==2 || i==3)
            c = 1;
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a+b;
        }
        if(i==size)
            cout<<c;
        else
            cout<<c<<", ";
    }
    cout<<endl;
    return 0;
}
