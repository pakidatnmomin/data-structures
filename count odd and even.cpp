#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int odd_count = 0, even_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
                    even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "The number of even integers in the array is: " << even_count << endl;
    cout << "The number of odd integers in the array is: " << odd_count << endl;

    return 0;
}
