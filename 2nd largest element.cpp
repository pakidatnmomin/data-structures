#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int second_largest = arr[n - 2];
     cout << "The second largest element in the array is: " << second_largest << endl;

    return 0;
}






