#include <iostream>
using namespace std;

int main()
 {
  int n, m;
  cout << "Enter the number of elements in the first array: ";
  cin >> n;

  int arr1[n];
  cout << "Enter the elements of the first array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }

  cout << "Enter the number of elements in the second array: ";
  cin >> m;

  int arr2[m];
  cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) 
	{
    cin >> arr2[i];
  }

  int len = n + m;
  int arr3[len];
  int i = 0, j = 0, k = 0;

  while (i < n)
   {
    arr3[k] = arr1[i];
    i++;
    k++;
  }

  while (j < m)
   {
    arr3[k] = arr2[j];
    j++;
    k++;
  }
   cout << "The merged array is: ";
  for (int i = 0; i < len; i++) {
    cout << arr3[i] << " ";
  }
  cout << endl;

  return 0;
}
