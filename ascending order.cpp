#include <iostream>
using namespace std;
int main()
{
int arr[5]={5,4,3,2,1},temp,size,j;
cout << "Enter the total no. of elements: ";
    cin >> size;
    
    
    cout << "Enter the elements of the array: " << endl;
    for (int i= 0; i < size; i++){
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < size; i++)
	{
        for (j = i; j < size; j++)
		{
            if (arr[i] > arr[j+1])
			{
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }    }
    }
    
    
    cout << "Elements sorted in the ascending order are: " << endl;
    for (int i = 1; i <= size; i++)
	{
     cout << arr[i] << endl;   
    }
    return 0;
}
		
			
