#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Triple Sum " << endl;

  while (true) {
    cout << "Enter the array size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
      cout << "Enter the Number ";
      cin >> arr[i];
    }
    int z;
    cout << "Enter the key Elements : ";
    cin >> z;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = i + 2; k < n; k++) {
          if ((arr[i] + arr[j] + arr[k]) == z) {
            cout << "Pair of elements : " << arr[i] << " " << arr[j] <<" " <<arr[k] << endl;
          }
        }
      }
    }
    cout << endl;
  }
  return 0;
}
