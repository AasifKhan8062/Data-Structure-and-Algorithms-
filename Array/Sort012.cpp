#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Sort 0 1 2 Array " << endl;

  while (true) {
    cout << "Enter the array size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
      cout << "Enter the Number ";
      cin >> arr[i];
    }
    int i=0;
    int j=0;
    int k=n-1;
    while(j<=k){
      if(arr[j] == 0){
        int a = arr[i];
        int b = arr[j];
        arr[i] = b;
        arr[j] = a;
        i++;
        j++;
      }
      else if(arr[j] == 1){
        j++;
      }
      else if(arr[j] == 2){
        int a = arr[k];
        int b = arr[j];
        arr[k] = b;
        arr[j] = a;
        k--;
      }
    }
    for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout << endl;
  }
  return 0;
}
