#include <iostream>
using namespace std;
int search(int *arr,int n,int k){
  for(int i=0;i<n;i++){
    if(arr[i] == k)
      return i;
  }
  return -1;
}
int main() {
  cout<<"Linewr Search"<<endl;
  int n;
  while(true){
    cout<<"Enter the of Array size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cout<<"Enter the Velue : ";
      cin>>arr[i];
    }
    int k;
    cout<<"Enter the Search element: ";
    cin>>k;
    int value = search(arr,n,k);
    if(value == -1){
      cout<<k<<" is not found "<<endl;
    }
    else{
      cout<<k<<" is found "<<value<<endl;
    }
  }
  return 0;
}
