#include <iostream>


using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in both arrays: ";
    cin >> n;

    int arr1[n], arr2[n];
     cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
	 {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2, n))
	 {
        cout << "The two arrays are the same." << endl;
    }
	 else
	  {
        cout << "The two arrays are not the same." << endl;
    }

    return 0;
}
