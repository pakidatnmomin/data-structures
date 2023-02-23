#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int len;
    cout << "Enter the length of the array: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + len, greater<int>());

    cout << "The sorted array in descending ";
}
for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



