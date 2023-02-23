#include<iostream>
using namespace std;
int main()
{
    int num, i, check=0;
    cout<<"Enter a Number: ";
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            
            check++;
            break;
        }
    }
    if(check==0)
        cout<<"\n It is a Prime Number";
    else
        cout<<"\n It is not a Prime Number";
    cout<<endl;
    return 0;
}
