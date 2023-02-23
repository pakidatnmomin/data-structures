#include<iostream>
using namespace std;
int main()
{
    int num,n, rem, rev=0;
    cout<<"Enter the Number: ";
    cin>>num;
    n=num;
    while(num!=0)
    {
        rem = num%10;
        rev = rem + (rev*10);
        num = num/10;
    }
    cout<<"\nReverse = "<<rev;
    cout<<endl;
    if(n==rev)
    cout<<" the num is palindrome";
    else
    cout<<"the num is not palindrome";
    return 0;
}
