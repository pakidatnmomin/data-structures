#include <iostream>
#include<algorithm>

using namespace std;

int main()
 {
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

    cout << "The second smallest element in the array is: " << arr[1] << endl;

    return 0;
}

