#include<iostream>
using namespace std;
int main()
{
    int num, i, res;
    cout<<"enter a num :";
    cin>>num; 
    for(i=1; i<=10; i++)
    {
        res = num*i;
        cout<<num<<" * "<<i<<" = "<<res;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
