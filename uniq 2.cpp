#include <iostream>
using namespace std;

int main()
{

    int array[10], temp[10];
    int n, i, j, cnt;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "\nEnter elements in array: ";

    for (i = 0; i < n; i++) {
        cin >> array[i];
        temp[i] = -1;
    }

    

    for (i = 0; i < n; i++) {
        cnt = 1;
        for (j = i + 1; j < n; j++) {

            if (array[i] == array[j]) {
                cnt++;
                temp[j] = 0;
            }
        }

        if (temp[i] != 0) {
            temp[i] = cnt;
        }
    }

    
    cout << "\nUnique elements present in the array are: ";
    for (i = 0; i < n; i++) {
        if (temp[i] == 1) {
            cout << array[i] << ",  ";
        }
    }

    return 0;
}
