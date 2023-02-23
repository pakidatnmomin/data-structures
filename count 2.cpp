#include <iostream>
using namespace std;
int main()
{
int arr [5],c;
	

for(int i=0;i<5;i++)
{
cout<<" enter a value"<<i+1<<":";
cin >>arr[i];	
}


cout<<" values are:";
for(int i=0;i<5;i++);
{
cout<<arr[c]<<"\t";	
	}
cout<<"enter a no you want to count"<<":";
cin>>c;		
int count=0;

for(int i=0;i<5;i++)
{

	
if(c==arr[i])
count++;	
}
cout<<"the value found in array"<<"="<<count;
return 0;
}
