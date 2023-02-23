#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int arr[5],i;
	cout<<"enter a number which you want to reverse"<<endl;
	for(i=0;i<5;i++)
	  
    {
	cout<<"values are"<<i+1<<":"<<"\t";
	cin>>arr[i];
}
cout<<"elements are";
for(i=0;i<5;i++)
{

        cout << arr[i] << " ";  
    }
	cout<<"reverse of the array is";
	for(i=4;i>-1;i--)
	{
	
	cout<<" "<<arr[i];
}
    return 0;  
}  
