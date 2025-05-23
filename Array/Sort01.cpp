#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Sort 0 1 Array" << endl;
  while (true) {
    cout << "Enter the array size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
      cout << "Enter the Number ";
      cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    while (i <= j) {
      if (arr[i] == 1 && arr[j] == 0) {
        int a = arr[i];
        int b = arr[j];
        arr[i] = b;
        arr[j] = a;
        i++;
        j--;
      }
    }
    for (i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
