#include <iostream>
using namespace std;
void reverse(int *arr,int n){
  int i=0;
  int j=n-1;
  while(i<=j){
    int a = arr[i];
    int b = arr[j];
    arr[i] = b;
    arr[j] = a;
    i++;
    j--;
  }
}

int main() {
  cout<<"Reverse Array"<<endl;
  int n;
  while(true){
    cout<<"Enter the of Array size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cout<<"Enter the Velue : ";
      cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  }
  return 0;
}