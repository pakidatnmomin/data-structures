#include <iostream>
using namespace std;
int main()
{
int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "odd numbers: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
       }
  }
  cout << endl;

  return 0;
}
