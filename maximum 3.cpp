#include <iostream>
using namespace std;
int main()
{
int arr[5],i;
for(i=0;i<5;i++)
{
cout<<"enter a 5 values"<<i+1<<":"<<"\t";
cin >>arr[i];	
}
cout<<" values are"<<":";
for (i=0;i<5;i++)
{
cout<<arr[i]<<"\t";
	
}
int max=arr[0];
for(i=0;i<5;i++)
{
if (max >arr[i]);

	max=arr[i];

}
cout<<"maximum value is"<<max<<":";
	
}

