#include <iostream>
using namespace std;
int main()
{
int arr[5],i;
for(i=0;i<5;i++)
{
cout<<"enter a 5 vlues"<<i+1<<":"<<"\t";
cin >>arr[i];	
}
cout<<" values are";
for (i=0;i<5;i++)
{
cout<<arr[i]<<"\t";
}
int min=arr[0];
bool flag;
for(int i=0;i<5;i++)
{

if(min==arr[i])
flag++;	
}
cout<<"the minimum number is"<<min;
if(flag==1)
cout<<endl<<"value found";
else
cout<<endl<<"value not found";
}
