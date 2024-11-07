#include <iostream>
using namespace std;
void AlternativeSwap(int *arr,int n){
  int i = 0;
  int j = 1;
  while(i < n && j < n){
    int a = arr[i];
    int b = arr[j];
    arr[i] = b;
    arr[j] = a;
    i+=2;
    j+=2;
  }
  
}
int main() {
  cout<<"Alternative Swap Element"<<endl;
  int n;
  while(true){
    cout<<"Enter the of Array size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cout<<"Enter the Velue : ";
      cin>>arr[i];
    }
    AlternativeSwap(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}