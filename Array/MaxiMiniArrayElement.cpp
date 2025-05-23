#include <iostream>
#include <limits.h>
using namespace std;
int Maximum(int arr[],int n){
  int max = INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}
int Minimum(int arr[],int n){
  int min = INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  return min;
}
int main() {
  cout<<"Maximum And Minimum element in Array"<<endl;
  int n;
  while(true){
    cout<<"Enter the array size : ";
    cin>>n;

    int num;
    int arr[100];
    for(int i=0;i<n;i++){
      cout<<"Enter the "<<i+1<<" Velue : ";
      cin>>num;
      arr[i] = num;
    }
    cout<<"Maximum velue is : "<<Maximum(arr,n)<<endl;
    cout<<"Minimum velue is : "<<Minimum(arr,n)<<endl;
    
  }
  return 0;
}
