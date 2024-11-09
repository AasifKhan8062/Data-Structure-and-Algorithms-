#include <iostream>
using namespace std;
int pivotElement(int arr[], int n) {
  int s = 0;
  int e = n-1;
  int m = 0;
  while (s < e) {
    m = s + (e - s) / 2;
    if (arr[m] >= arr[0]) {
      s = m + 1;
    } else {
      e = m;
    }
  }
  return e;
}
int binarysearch(int arr[], int s, int e, int k) {
  int m = 0;
  while (s <= e) {
    m = s + (e - s) / 2;
    if (arr[m] == k) {
      return m;
    } else if (arr[m] < k) {
      s = m + 1;
    } else {
      e = m - 1;
    }
  }
  return -1;
}
int searchElement(int arr[], int n, int k) {
  int pivot = pivotElement(arr, n);
  if (arr[pivot] <= k && k <= arr[n - 1]) {
    return binarysearch(arr, pivot, n-1, k);
  }
   
    return binarysearch(arr, 0, pivot - 1, k);
}
int main() {
  cout << "Search of Rotated Array" << endl;
  while (true) {
    int arr[100];
    int n;
    cout << "Enter size of Array : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
      cout << "Enter the number: ";
      cin >> arr[i];
    }
    int k;
    cout << "Enter Key Value : ";
    cin >> k;

    int velue = searchElement(arr, n, k);
    if (velue == -1) {
      cout << "Elements not Found " << endl;
    } else {
      cout << "Elements Found Index : " << velue << endl;
    }
  }
  return 0;
}
