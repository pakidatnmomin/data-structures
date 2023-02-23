#include <iostream>
using namespace std;
int main()
{
int arr [5],i;
	

for(int i=0;i<5;i++)
{
cout<<" enter a value"<<i+1<<":";
cin >>arr[i];	
}
for (int i=0;i<5;i++);
{
cout<<" values are:"<<"\n";
for(i=0;i<5;i++)
{
cout<<arr[i]<<"\t";	
	}	
}
int even=arr[i];
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
cout<<" the even num is"<<" "<<arr[i]<<"\n";
else if(arr[i]%2!=0)
cout<<"the odd num is"<<":"<<arr[i];
	
}
}
